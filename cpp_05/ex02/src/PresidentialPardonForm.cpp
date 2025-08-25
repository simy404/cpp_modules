#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("target") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& form) : AForm(form) {}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& form)
{
	if (this != &form) {
		AForm::operator=(form);
		this->_target = form._target;
	}
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	validateExecutor(executor);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {};
