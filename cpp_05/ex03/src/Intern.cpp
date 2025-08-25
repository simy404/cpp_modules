#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {};

Intern::Intern(const Intern& intern) {}

Intern&	Intern::operator=(const Intern& intern) { return *this};

AForm *Intern::makeRobotomyRequestForm(const std::string& target) {return new RobotomyRequestForm(target);}

AForm *Intern::makePresidentialPardonForm(const std::string& target) {return new PresidentialPardonForm(target);}

AForm *Intern::makeShrubberyCreationForm(const std::string& target) {return new ShrubberyCreationForm(target);}

AForm	*Intern::makeForm(std::string formName, std::string target)
{
	typedef AForm* (Intern::*FormMaker)(const std::string& _target);

	FormMaker	maker[3] = {
		&Intern::makeRobotomyRequestForm,
		&Intern::makePresidentialPardonForm,
		&Intern::makeShrubberyCreationForm
	};

	std::string	FormNames[3] = {
		"roboto myRequest",
		"presidential pardon",
		"shrubbery creation"
	};

	AForm*		form = NULL;

	for (size_t i = 0; i < 3; i++) {
		if (target == FormNames[i]) {
			form = (this->*maker[i])(target);
			break;
		}
	}

	return form;
}
Intern::~Intern() {};
