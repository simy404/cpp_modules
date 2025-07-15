#include "../includes/AMateria.hpp"


AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(const AMateria& amateria){}

AMateria&	AMateria::operator=(const AMateria& amateria)
{
	if (this != &amateria)
	{
		this->_type = amateria._type;
	}
	return *this;	
}

std::string	const & AMateria::getType() const
{
	return _type;
}

AMateria::~AMateria() {}
