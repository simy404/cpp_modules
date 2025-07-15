#ifndef CURE_HPP
# define CURE_HPP

#include "../includes/AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &cure);
		Cure& operator=(const Cure &cure);

		virtual AMateria* clone() const;
		virtual	void use(ICharacter& target);
		
		~Cure();
};


#endif
