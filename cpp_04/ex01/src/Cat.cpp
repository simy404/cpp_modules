#include "../includes/Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	if (this != &cat)
	{
		brain = new Brain(*cat.brain);
	}
}

Cat& Cat::operator=(const Cat &cat)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &cat)
	{
		type = cat.type;
		*brain = *cat.brain;
	}
	return *this;
}

std::string Cat::get_idea(int index) const
{
	return brain->get_idea(index);
}

void Cat::set_idea(int index, const std::string& idea)
{
	brain->set_idea(index, idea);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor operator called" << std::endl;
	delete brain;
}

void	Cat::makeSound() const
{
	std::cout << "Cat is making sound" << std::endl;
}
