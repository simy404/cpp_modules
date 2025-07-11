#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	std::string	_name;
	Weapon*	_weapon;

	public:
		HumanB(std::string name);
		void	setWeapon(Weapon& weapon);
		void	attack() const;

};

#endif
