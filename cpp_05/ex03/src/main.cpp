#include <iostream>
#include <string>
#include "../includes/Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

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
