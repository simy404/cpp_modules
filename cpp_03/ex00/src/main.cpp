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
	clapTrap_2.attack("Dummy1");
	clapTrap_2.attack("Dummy2");
	clapTrap_2.attack("Dummy3");
	clapTrap_2.attack("Dummy4");
	clapTrap_2.attack("Dummy5");
	clapTrap_2.attack("Dummy6");
	clapTrap_2.attack("Dummy7");
	clapTrap_2.attack("Dummy8");
	clapTrap_2.beRepaired(5);
	clapTrap_2.attack("Dummy9");
	clapTrap_1.takeDamage(15);
	clapTrap_1.attack("Dummy");
	clapTrap_2.beRepaired(5);
}
