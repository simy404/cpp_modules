#include "../includes/HumanB.hpp"
#include "iostream"

void	HumanB::attack() const
{
	std::cout << _name << " attacks with their " <<  _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{

}
