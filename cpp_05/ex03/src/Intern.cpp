#include <iostream>
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {};

Intern::Intern(const Intern& intern) { (void)intern;}

Intern&	Intern::operator=(const Intern& intern) { (void)intern; return *this;}

AForm *Intern::makeRobotomyRequestForm(const std::string& target) {return new RobotomyRequestForm(target);}

AForm *Intern::makePresidentialPardonForm(const std::string& target) {return new PresidentialPardonForm(target);}

AForm *Intern::makeShrubberyCreationForm(const std::string& target) {return new ShrubberyCreationForm(target);}

AForm	*Intern::makeForm(std::string formName, std::string target)
{
	 AForm* (Intern::*maker[3])(const std::string& _target) = {
		&Intern::makeRobotomyRequestForm,
		&Intern::makePresidentialPardonForm,
		&Intern::makeShrubberyCreationForm
	};

	std::string	formNames[3] = {
		"roboto myRequest",
		"presidential pardon",
		"shrubbery creation"
	};

	AForm*	form = NULL;

	for (size_t i = 0; i < 3; i++) {
		if (formName == formNames[i]) {
			form = (this->*maker[i])(target);
			std::cout << "Intern creates " << formNames[i];
			break;
		}
	}

	if (form == NULL) {
		std::cout << "Intern cannot find form with this name " << formName << std::endl;
	}
	return form;
}
Intern::~Intern() {};
