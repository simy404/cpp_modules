#include "AForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include <iostream>

AForm::AForm() : _name("Form"), _signGrade(150), _execGrade(150), _signed(false) {}

AForm::AForm(const AForm &form) : _name(form._name), _signGrade(form._signGrade), _execGrade(form._execGrade), _signed(form._signed) {}

AForm::AForm(const std::string &name, int signGrade, int execGrade) : _name(name), _signGrade(validateGrade(signGrade)), _execGrade(validateGrade(execGrade)), _signed(false) {}

AForm&	AForm::operator=(const AForm &form)
{
	if (this != &form) {
		this->_signed = form._signed;
	}
	return *this;
}

int	 AForm::validateGrade(int grade)
{
	if (grade > 150) {
		throw GradeTooLowException();
	}
	if (grade < 1) {
		throw GradeTooHighException();
	}
	return grade;
}

const std::string&	AForm::getName() const
{
	return this->_name;
}

int	AForm::getSignGrade() const
{
	return this->_signGrade;
}

int	AForm::getExecGrade() const
{
	return this->_execGrade;
}

bool	AForm::getSigned() const
{
	return this->_signed;
}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw AForm::GradeTooLowException();
	this->_signed = true;
}

void	AForm::validateExecutor(const Bureaucrat &bureaucrat) const
{
	if (!this->getSigned())
		throw FormIsNotSignException();
	if (bureaucrat.getGrade() > this->_execGrade)
		throw AForm::GradeTooLowException();
}

AForm::~AForm() {}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "GradeTooHighException";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "GradeTooLowException";
}

const char* AForm::FormIsNotSignException::what() const throw()
{
	return "FormIsNotSignException";
}

std::ostream&	operator<<(std::ostream& cout, const AForm &Form)
{
	return cout << "name: " << Form.getName()
	 			<< ", signGrade: " << Form.getSignGrade()
				<< ", form execGrade: " << Form.getExecGrade()
				<< ", form signed: " << (Form.getSigned() ? "true" : "false");
}
