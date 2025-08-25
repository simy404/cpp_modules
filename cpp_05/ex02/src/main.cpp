#include <iostream>
#include <string>
#include "../includes/Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

std::ostream&	operator<<(std::ostream& cout, const Bureaucrat &Bureaucrat)
{
	return cout << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << ".";
}

std::ostream&	operator<<(std::ostream& cout, const AForm &Form)
{
	return cout << "name: " << Form.getName()
	 			<< ", signGrade: " << Form.getSignGrade()
				<< ", form execGrade: " << Form.getExecGrade()
				<< ", form signed: " << (Form.getSigned() ? "true" : "false");
}

int	main()
{
	Bureaucrat		b1("Child-1", 5);
	Bureaucrat		b2("Child-2", 50);
	PresidentialPardonForm f1("Target-1");

	b1.executeForm(f1);
	std::cout << f1 << std::endl;
	b1.signForm(f1);
	b1.executeForm(f1);

	b2.executeForm(f1);

	ShrubberyCreationForm s1("Target-2");
	b1.signForm(s1);
	b1.executeForm(s1);

	RobotomyRequestForm r1("Target-3");
	b1.signForm(r1);
	b1.executeForm(r1);
}


