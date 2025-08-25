#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("target") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& form) : AForm(form) {}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& form)
{
	if (this != &form) {
		AForm::operator=(form);
		this->_target = form._target;
	}
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	validateExecutor(executor);
	if (rand() % 2) {
		std::cout << _target << " has been robotomized." << std::endl;
	} else {
		std::cout << _target << "robotomy failed." << std::endl;
	}
}

RobotomyRequestForm::~RobotomyRequestForm() {};
