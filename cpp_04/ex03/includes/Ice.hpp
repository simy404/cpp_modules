#ifndef ICE_HPP
# define ICE_HPP

#include "../includes/AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice &ice);
		Ice& operator=(const Ice &ice);

		virtual AMateria* clone() const;
		virtual	void use(ICharacter& target);

		~Ice();
};


#endif
