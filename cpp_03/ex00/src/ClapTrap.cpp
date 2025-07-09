#include "../includes/ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : name("Default Name"), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "Parameter constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name) : name(_name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "Parameter constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	std::cout << "Copty constructor called" << std::endl;
	if (this != &claptrap) {
		*this = claptrap;
	}
}

ClapTrap& ClapTrap::operator=(const ClapTrap &claptrap)
{
	std::cout << "Copy assignment operator called" << std::endl;
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
	if (energy_points > 0) {
		std::cout << "ClapTrap "<< name <<" attacks "<< target <<", causing "<< attack_damage  <<" points of damage!" << std::endl;
		energy_points--;
	} else {
		std::cout << "ClapTrap "<< name <<" has not enough energy" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) //energy cost
{
	if (energy_points > 0) {
		std::cout << "ClapTrap "<< name <<" repaired itself for " << amount << " hit points." << std::endl;
		energy_points--;
		hit_points += amount;
	} else {
		std::cout << "ClapTrap "<< name <<" has not enough energy" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap "<< name <<" takes "<< amount << " points of damage!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap "<< name <<" has been destroyed." << std::endl;
}
