#include "../includes/Zombie.hpp"

#include <iostream>

Zombie::Zombie(std::string _name){
	name = _name;
}

void Zombie::announce() const {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << name << " is destroyed." << std::endl;
}



