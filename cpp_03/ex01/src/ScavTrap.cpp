#include "../includes/ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "ScavTrap Parameter constructor called" << std::endl;
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap)
{
	std::cout << "ScavTrap Copty constructor called" << std::endl;
	if (this != &scavTrap) {
		*this = scavTrap;
	}
}

ScavTrap& ScavTrap::operator=(const ScavTrap &ScavTrap)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &ScavTrap) {
		this->name = ScavTrap.name;
		this->hit_points = ScavTrap.hit_points;
		this->energy_points = ScavTrap.energy_points;
		this->attack_damage = ScavTrap.attack_damage;
	}
	return *this;
}
void ScavTrap::attack(const std::string& target)
{
	if (energy_points > 0) {
		std::cout << "ScavTrap "<< name <<" attacks "<< target <<", causing "<< attack_damage  <<" points of damage!" << std::endl;
		energy_points--;
	} else {
		std::cout << "ScavTrap "<< name <<" has not enough energy" << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " <<  name <<" is now in Gatekeeper mode.!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap "<< name <<" has been destroyed." << std::endl;
}
