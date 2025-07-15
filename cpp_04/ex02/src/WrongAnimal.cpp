#include <WrongAnimal.hpp>
#include <iostream>

WrongAnimal::WrongAnimal() : type("WrongAnimal") 
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string _type) : type(_type) {
	std::cout << "WrongAnimal Parameter constructor called" << std::endl;
}; 

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	if (this != &animal)
		*this = animal;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &animal)
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if (this != &animal)
	{
		type = animal.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor assignment operator called" << std::endl;
}

const std::string &WrongAnimal::getType() const
{
	return type;
}


void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal is making sound" << std::endl;
}
