#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongDog.hpp"
#include "../includes/WrongCat.hpp"

#include <iostream>

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "***WRONG***"  << std::endl;

	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wj = new WrongDog();
	const WrongAnimal* wi = new WrongCat();

	std::cout << wj->getType() << " " << std::endl;
	std::cout << wi->getType() << " " << std::endl;

	wi->makeSound(); //will output the cat sound!
	wj->makeSound();
	wmeta->makeSound();

	delete wmeta;
	delete wj;
	delete wi;
	return 0;
}
