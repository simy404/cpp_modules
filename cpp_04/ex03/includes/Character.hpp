#ifndef CHARACTER_HPP
# define CHARACTER_HPP
 
#include <string>
#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character();
		Character(std::string const & type);
		Character(const Character& character);

		Character&	operator=(const Character& character);
};


#endif
