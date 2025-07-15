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
	Dog* dog3 = new Dog();

	*dog3 = *dog1;

	delete dog1;
	delete dog2;
	delete dog3;


	Cat* cat1 = new Cat();
	Cat* cat2 = new Cat(*cat1);
	Cat* cat3 = new Cat();

	cat3->set_idea(0, "less braiin");
	cat1->set_idea(0, "more brainnnn");
	*cat3 = *cat1;

	std::cout << cat3->get_idea(0) << std::endl;
	delete cat1;
	delete cat2;
	delete cat3;

	return 0;
}
