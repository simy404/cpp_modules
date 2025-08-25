#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("target") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& form) : AForm(form)
{
	if (this != &form) {
		this->_target = form._target;
	}
}

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
	srand(time(NULL));
	if (rand() % 2) { // ((state[0] * 1103515245) + 12345) & 0x7fffffff
		std::cout << _target << " has been robotomized." << std::endl;
	} else {
		std::cout << _target << " robotomy failed." << std::endl;
	}
}

RobotomyRequestForm::~RobotomyRequestForm() {};
