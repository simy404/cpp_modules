#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "../includes/ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:
		FragTrap();
		FragTrap(const FragTrap &fragTrap);
		FragTrap(std::string _name);

		FragTrap& operator=(const FragTrap &fragTrap);

		void	highFivesGuys();
		~FragTrap();
};

#endif
