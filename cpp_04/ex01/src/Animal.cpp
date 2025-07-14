#include <Animal.hpp>
#include <iostream>

Animal::Animal() : type("Animal") 
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string _type) : type(_type) {
	std::cout << "Animal Parameter constructor called" << std::endl;
}; 

Animal::Animal(const Animal &animal)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	if (this != &animal)
		*this = animal;
}

Animal& Animal::operator=(const Animal &animal)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &animal)
	{
		type = animal.type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor operator called" << std::endl;
}

const std::string &Animal::getType() const
{
	return type;
}


void	Animal::makeSound() const
{
	std::cout << "Animal is making sound" << std::endl;
}
