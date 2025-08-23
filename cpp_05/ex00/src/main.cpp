#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

std::ostream&	operator<<(std::ostream& cout, const Bureaucrat &Bureaucrat)
{
	return cout << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << ".";
}

int	main()
{
	int a = 5;
	Bureaucrat	b1("Child-1", 150);
	Bureaucrat b2("Child-2", 1);

	try
	{
		while (true) {
			b2.increment();
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
		std::cout << a << std::endl;
	}

	try
	{
		while (true) {
			b1.decrement();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::cout << a << std::endl;
	}

	std::cout << b1 << std::endl;
	std::cout <<b2 << std::endl;
}


