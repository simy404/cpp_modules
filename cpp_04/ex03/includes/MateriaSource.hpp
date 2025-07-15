#ifndef MATERIASOURCE
# define MATERIASOURCE

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &materiaSource);
		MateriaSource& operator=(const MateriaSource &materiaSource);

		
		~MateriaSource();

};

#endif
