#include "../includes/WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat) : WrongAnimal(cat)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &cat)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this != &cat)
	{
		type = cat.type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor assignment operator called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat is making sound" << std::endl;
}
