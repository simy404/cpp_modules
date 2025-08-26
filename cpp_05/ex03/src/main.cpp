#include <iostream>
#include <string>
#include "../includes/Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

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

	Intern intern;

	AForm* f2 = intern.makeForm("test", "target");
	if (f2 == NULL) {
		std::cout << "f2 is null" << std::endl;
	}
	AForm* f3 = intern.makeForm("roboto myRequest", "target-3");
	if (f3 != NULL) {
		b1.signForm(*f3);
		b1.executeForm(*f3);
	}

}


