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

		void set_idea(int index, const std::string& idea);
		std::string get_idea(int index) const;

		virtual	void makeSound() const;
		~Dog();
};

#endif
