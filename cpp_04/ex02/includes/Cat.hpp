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

		void set_idea(int index, const std::string& idea);
		std::string get_idea(int index) const;

		virtual	void makeSound() const;
		~Cat();
};

#endif
