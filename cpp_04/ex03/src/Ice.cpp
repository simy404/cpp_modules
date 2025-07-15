#include "../includes/Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice& ice) : AMateria("ice"){}

Ice&	Ice::operator=(const Ice& ice)
{
	return *this;
}

AMateria*	Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() <<"*" <<  std::endl;
}
