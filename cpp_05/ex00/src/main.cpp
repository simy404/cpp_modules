#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	b1("Child-1", 140);
	Bureaucrat	b2("Child-2", 10);

	try
	{
		Bureaucrat b3("Child-3", 15);
		while (true)
		{
			std::cout << b2 << std::endl;
			b2.increment();
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << b2 << std::endl;
	}

	try
	{
		while (true)
		{
			std::cout << b1 << std::endl;
			b1.decrement();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << b1 << std::endl;
	}
}


