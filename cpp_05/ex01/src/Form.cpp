#include "Form.hpp"

Form::Form() : _name("Form"), _signGrade(150), _execGrade(150), _signed(false) {}

Form::Form(const Form &form) : _name(form._name), _signGrade(form._signGrade), _execGrade(form._execGrade), _signed(form._signed) {}

Form::Form(const std::string &name, int signGrade, int execGrade) : _name(name), _signGrade(validateGrade(signGrade)), _execGrade(validateGrade(execGrade)), _signed(false) {}

Form&	Form::operator=(const Form &form)
{
	if (this != &form) {
		this->_signed = form._signed;
	}
	return *this;
}

int	 Form::validateGrade(int grade)
{
	if (grade > 150) {
		throw GradeTooLowException();
	}
	if (grade < 1) {
		throw GradeTooHighException();
	}
	return grade;
}

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
	if (bureaucrat.getGrade() > this->_signGrade)
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
