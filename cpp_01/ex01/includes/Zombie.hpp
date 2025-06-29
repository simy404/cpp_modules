#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
	std::string	name;

	public:
		void	Zombie::setName(const std::string _name);
		void	announce() const;
		~Zombie();
};

Zombie*	zombieHorde( int N, std::string name );

#endif
