#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"

class Dog : public Animal
{
	Brain	*brain;
	public:
		Dog();
		Dog(const Dog &dog);
		Dog &operator=(const Dog &dog);

		virtual	void makeSound() const;
		~Dog();
};

#endif
