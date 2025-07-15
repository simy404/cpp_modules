#ifndef CHARACTER_HPP
# define CHARACTER_HPP
 
#include <string>
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	_type;
		AMateria*	materias[4];
	public:
		Character(std::string const & type);
		Character(const Character& character);
		Character&	operator=(const Character& character);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		
		~Character();
};


#endif
