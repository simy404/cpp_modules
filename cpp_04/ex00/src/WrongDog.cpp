#include "../includes/WrongDog.hpp"
#include <iostream>

WrongDog::WrongDog() : WrongAnimal("Dog")
{
	std::cout << "WrongDog Default constructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &dog) : WrongAnimal(dog)
{
	std::cout << "WrongDog Copy constructor called" << std::endl;
}

WrongDog& WrongDog::operator=(const WrongDog &dog)
{
	std::cout << "WrongDog assignment operator called" << std::endl;
	if (this != &dog)
	{
		type = dog.type;
	}
	return *this;
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog Destructor called" << std::endl;
}

void	WrongDog::makeSound() const
{
	std::cout << "WrongDog is making sound" << std::endl;
}
