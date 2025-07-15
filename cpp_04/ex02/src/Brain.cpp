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
		for (size_t i = 0; i < 100; i++) {
			this->ideas[i] =  brain.ideas[i];
		}
	}
	return *this;
}

std::string Brain::get_idea(int index) const
{
	return ideas[index];
}

void Brain::set_idea(int index, const std::string& idea)
{
	ideas[index] = idea;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor operator called" << std::endl;
}
