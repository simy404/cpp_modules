#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "../includes/ClapTrap.hpp"


class ScavTrap : public ClapTrap
{

	public:

	ScavTrap();
	ScavTrap(const ScavTrap &scavTrap);
	ScavTrap(std::string _name);

	ScavTrap& operator=(const ScavTrap &scavTrap);

	void	attack(const std::string& target);
	void	guardGate();
	~ScavTrap();
};



#endif
