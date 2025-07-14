#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongDog.hpp"
#include "../includes/WrongCat.hpp"

#include <iostream>


int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	Animal *animals[20];

	for (size_t i = 0; i < 10; i++){
		animals[i] = new Cat();
	}


	for (size_t i = 10; i < 20; i++){
		animals[i] = new Dog();
	}
	
	for (size_t i = 0; i < 20; i++){
		delete animals[i];
	}

	Dog* dog1 = new Dog();
	Dog* dog2 = new Dog(*dog1);

	delete dog1;
	delete dog2;
	return 0;
}
