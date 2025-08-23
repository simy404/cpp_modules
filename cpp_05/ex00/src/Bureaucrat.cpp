#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(150) {}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : name(bureaucrat.name), grade(bureaucrat.grade) {}

Bureaucrat::Bureaucrat(const std::string &_name, int _grade) : name(_name)
{
	this->setGrade(_grade);
}

Bureaucrat&		Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	if (this != &bureaucrat) {
		grade = bureaucrat.grade;
	}
	return *this;
}

const std::string&	Bureaucrat::getName() const
{
	return name;
}

/* Self Encapsulate Field*/
void	Bureaucrat::setGrade(int _grade)
{
	if (_grade > 150) {
		throw GradeTooLowException();
	}
	if (_grade < 1) {
		throw GradeTooHighException();
	}
	this->grade = _grade;
}

int	Bureaucrat::getGrade() const
{
	return grade;
}

void	Bureaucrat::increment()
{
	this->setGrade(grade - 1);
}

void	Bureaucrat::decrement()
{
	this->setGrade(grade + 1);
}

Bureaucrat::~Bureaucrat() {};

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return "GradeTooHighException";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return "GradeTooLowException";
}
