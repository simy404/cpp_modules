#include "../includes/Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &cat)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &cat)
	{
		type = cat.type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor  operator called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Cat is making sound" << std::endl;
}
