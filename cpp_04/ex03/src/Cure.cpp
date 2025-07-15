#include "../includes/Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& Cure) : AMateria("cure"){}

Cure&	Cure::operator=(const Cure& cure)
{
	return *this;
}

AMateria*	Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName() <<"’s wounds *" <<  std::endl;
}


