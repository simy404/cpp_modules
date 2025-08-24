#include <iostream>
#include <string>
#include "../includes/Bureaucrat.hpp"
#include "Form.hpp"

std::ostream&	operator<<(std::ostream& cout, const Bureaucrat &Bureaucrat)
{
	return cout << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << ".";
}

std::ostream&	operator<<(std::ostream& cout, const Form &Form)
{
	return cout << "name: " << Form.getName()
	 			<< ", signGrade: " << Form.getSignGrade()
				<< ", form execGrade: " << Form.getExecGrade()
				<< ", form signed: " << (Form.getSigned() ? "true" : "false");
}

int	main()
{
	Bureaucrat	b1("Child-1", 140);
	Bureaucrat	b2("Child-2", 10);
	Form		f1("form-1", 50, 20);
	Form		f2("form-1", 130, 20);

	b1.signForm(f1);
	std::cout << f1 << std::endl;
	b2.signForm(f2);
	std::cout << f2 << std::endl;
	
	try {
		Form("form-3", 199, 212);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}


}


