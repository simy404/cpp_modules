#include "../includes/Character.hpp"

Character::Character(std::string const & type) : _type(type), materias(NULL) {}


Character::Character(const Character& character)
{
	if (this != &character)
		operator=(character);

}

Character&	Character::operator=(const Character& character)
{
	if (this != &character)
	{
		_type = character._type;
		for (size_t i = 0; i < 4; i++){
			*materias[i] = *character.materias[i];
		}
	}
	return *this;
}

std::string const & Character::getName() const
{
	return _type;
}

Character::~Character()
{
	
}


