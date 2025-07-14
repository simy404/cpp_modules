#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongAnimal();
		WrongAnimal(std::string _type);
		WrongAnimal(const WrongAnimal &wrongAnimal);
		WrongAnimal &operator=(const WrongAnimal &wrongAnimal);

		const std::string &getType() const;
		void makeSound() const;

		~WrongAnimal();
};

#endif
