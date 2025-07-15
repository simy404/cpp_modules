#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
	protected:
		std::string	type;
		Animal();
		Animal(std::string _type);
		Animal(const Animal &animal);
	
	public:
		Animal &operator=(const Animal &animal);
		const std::string &getType() const;
		virtual	void makeSound() const = 0;

		virtual ~Animal();
};

#endif
