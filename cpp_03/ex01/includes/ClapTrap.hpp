#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	protected:
		std::string	name;
		int	hit_points;
		int	energy_points;
		int	attack_damage;

	public:
		ClapTrap();
		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap &clapTrap);

		ClapTrap	&operator=(const ClapTrap &clapTrap);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		~ClapTrap();
};


#endif
