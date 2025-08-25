#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include "AForm.hpp"

class Intern
{
	private:
		AForm *makeRobotomyRequestForm(const std::string& target);
		AForm *makePresidentialPardonForm(const std::string& target);
		AForm *makeShrubberyCreationForm(const std::string& target);

	public:
		Intern();
		Intern(const Intern& intern);
		Intern&	operator=(const Intern& intern);

		AForm	*makeForm(std::string formName, std::string target);

		~Intern();
};

#endif
