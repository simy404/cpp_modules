#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <string>
#include "../includes/WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &wrongCat);
		WrongCat &operator=(const WrongCat &wrongCat);

		void makeSound() const;
		~WrongCat();
};

#endif
