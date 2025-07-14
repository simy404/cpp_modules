#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include "../includes/Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &cat);
		Cat &operator=(const Cat &cat);

		virtual	void makeSound() const;
		~Cat();
};

#endif
