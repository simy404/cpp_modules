#include "../includes/Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &dog)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &dog)
	{
		type = dog.type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor  operator called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Dog is making sound" << std::endl;
}
