#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"

class Cat : public Animal
{
	Brain	*brain;
	public:
		Cat();
		Cat(const Cat &cat);
		Cat &operator=(const Cat &cat);

		virtual	void makeSound() const;
		~Cat();
};

#endif
