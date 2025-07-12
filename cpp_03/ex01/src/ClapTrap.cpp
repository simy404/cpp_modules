#include "../includes/ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : name("Default Name"), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name) : name(_name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap Parameter constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	if (this != &claptrap) {
		*this = claptrap;
	}
}

ClapTrap& ClapTrap::operator=(const ClapTrap &claptrap)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &claptrap) {
		this->name = claptrap.name;
		this->hit_points = claptrap.hit_points;
		this->energy_points = claptrap.energy_points;
		this->attack_damage = claptrap.attack_damage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (energy_points > 0 && hit_points > 0) {
		std::cout << "ClapTrap "<< name <<" attacks "<< target <<", causing "<< attack_damage  <<" points of damage!" << std::endl;
		energy_points--;
	} else if (hit_points <= 0) {
		std::cout << "ClapTrap "<< name <<" has no hit points left to attack!" << std::endl;
	} else {
		std::cout << "ClapTrap "<< name <<" has no energy left to attack!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energy_points > 0 && hit_points > 0) {
		std::cout << "ClapTrap "<< name <<" repaired itself for " << amount << " hit points." << std::endl;
		energy_points--;
		hit_points += amount;
	} else if (hit_points <= 0) {
		std::cout << "ClapTrap "<< name <<" has no hit points left to be repaired!" << std::endl;
	}
	else {
		std::cout << "ClapTrap "<< name <<" has no energy left to be repaired!" << std::endl;
	}
}


void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points <= 0) {
		std::cout << "ClapTrap "<< name <<" has already been destroyed" << std::endl;
		return;
	}
	else if (hit_points - amount <= 0) {
		hit_points = 0;
		std::cout << "ClapTrap "<< name <<" has been destroyed!" << std::endl;
	}
	else {
		hit_points -= amount;
		std::cout << "ClapTrap "<< name <<" takes "<< amount << " points of damage!" << std::endl;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap "<< name <<" destructor called." << std::endl;
}
