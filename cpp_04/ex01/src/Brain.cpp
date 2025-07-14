#include "../includes/Brain.hpp"
#include <iostream>


Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(brain);
}

Brain &Brain::operator=(const Brain &brain)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &brain)
	{
		for (size_t i = 0; i < brain.ideas->size(); i++) {
			this->ideas[i] =  brain.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor operator called" << std::endl;
}
