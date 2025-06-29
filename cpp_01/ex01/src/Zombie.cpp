#include "Zombie.hpp"
#include <iostream>

void Zombie::setName(const std::string _name) {
	name = _name;
}

void Zombie::announce() const {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << name << " is destroyed." << std::endl;
}
