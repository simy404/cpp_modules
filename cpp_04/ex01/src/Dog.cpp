#include "../includes/Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	if (this != &dog)
	{
		brain = new Brain(*dog.brain);
	}
}

Dog& Dog::operator=(const Dog &dog)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &dog)
	{
		type = dog.type;
		*brain = *dog.brain;
	}
	return *this;
}

std::string Dog::get_idea(int index) const
{
	return brain->get_idea(index);
}

void Dog::set_idea(int index, const std::string& idea)
{
	brain->set_idea(index, idea);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor operator called" << std::endl;
	delete brain;
}

void	Dog::makeSound() const
{
	std::cout << "Dog is making sound" << std::endl;
}
