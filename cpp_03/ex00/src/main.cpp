#include "../includes/ClapTrap.hpp"

int main()
{
	ClapTrap	clapTrap_1("Warrior");
	ClapTrap	clapTrap_2(clapTrap_1);
	ClapTrap	clapTrap_3;

	clapTrap_3 = clapTrap_1;
	clapTrap_1.attack("Dummy");
	clapTrap_2.takeDamage(2);
	clapTrap_2.beRepaired(2);
}
