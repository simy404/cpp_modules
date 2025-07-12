#include "../includes/FragTrap.hpp"

int	main()
{
	FragTrap fragTrap1;
	FragTrap fragTrap2("RoboCop");
	FragTrap fragTrap3(fragTrap2);
	fragTrap1 = fragTrap2;

	fragTrap1.highFivesGuys();

	FragTrap fragTrap4("Terminator");
	fragTrap4.highFivesGuys();

	return 0;
}
