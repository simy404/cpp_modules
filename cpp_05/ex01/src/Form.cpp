#include "Form.hpp"

Form::Form() : _name("Form"), _signGrade(0), _execGrade(0), _signed(false) {}

Form::Form(const Form &form) : _name(form._name), _signGrade(form._signGrade), _execGrade(form._execGrade), _signed(form._signed) {}

Form::Form(const std::string &name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade), _signed(false) {}

const std::string&	Form::getName() const
{
	return this->_name;
}

int	Form::getSignGrade() const
{
	return this->_signGrade;
}

int	Form::getExecGrade() const
{
	return this->_execGrade;
}

bool	Form::getSigned() const
{
	return this->_signed;
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (this->_signGrade > bureaucrat.getGrade())
		throw Form::GradeTooLowException();
	this->_signed = true;
}

Form::~Form() {}

const char* Form::GradeTooHighException::what() const throw()
{
	return "GradeTooHighException";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "GradeTooLowException";
}
