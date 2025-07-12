#include "../includes/ScavTrap.hpp"

int	main()
{
	ScavTrap	scavTrap_1("Warrior");
	ScavTrap	scavTrap_2(scavTrap_1);

	scavTrap_1.attack("Dummy");
	scavTrap_2.takeDamage(2);
	scavTrap_2.beRepaired(2);
	scavTrap_2.guardGate();

	ScavTrap	scavTrap_3;
	scavTrap_3 = scavTrap_1;

	scavTrap_3.attack("Dummy2");
	scavTrap_3.takeDamage(2);
	scavTrap_3.beRepaired(2);
}
