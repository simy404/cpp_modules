#include "../includes/FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "FragTrap parameterized constructor called "<< std::endl;
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &fragTrap)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	if (this != &fragTrap){
		name = fragTrap.name;
		hit_points = fragTrap.hit_points;
		energy_points = fragTrap.energy_points;
		attack_damage = fragTrap.attack_damage;
	}
	return *this;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << "is sending a high five request!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

