#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(150) {}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : name(bureaucrat.name), grade(bureaucrat.grade) {}

Bureaucrat::Bureaucrat(const std::string &_name, int _grade) : name(_name), grade(_grade)
{
	// if (grade > 150)
	//todo give exception if attr is not valid
}

Bureaucrat&		Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	if (this != &bureaucrat) {
		grade = grade;
	}
	return *this;
}

const std::string&	Bureaucrat::getName() const
{
	return name;
}

int	Bureaucrat::getGrade() const
{
	return grade;
}

void	Bureaucrat::increment()
{

}

void	Bureaucrat::decrement()
{

}

Bureaucrat::~Bureaucrat() {};
