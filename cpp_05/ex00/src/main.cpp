#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

std::ostream&	operator<<(std::ostream& cout, const Bureaucrat &Bureaucrat)
{
	return cout << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << ".";
}

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
		std::cerr << e.what() << '\n';
		std::cout << b1 << std::endl;
	}
}


