#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

#include <string>
#include "../includes/WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
	public:
		WrongDog();
		WrongDog(const WrongDog &wrongDog);
		WrongDog &operator=(const WrongDog &wrongDog);

		void makeSound() const;
		~WrongDog();
};

#endif
