#include "../includes/ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("target") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& form) : AForm(form)
{
	if (this != &form) {
		this->_target = form._target;
	}
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& form)
{
	if (this != &form) {
		AForm::operator=(form);
		this->_target = form._target;
	}
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	validateExecutor(executor);

	std::ofstream out_stream((_target + "_shrubbery").c_str());
	if (!out_stream.is_open()) {
		throw OutFileNotOpenException();
	}

	out_stream
		<< "          &&& &&  & &&" 		<< std::endl
		<< "      && &\\/&\\|& ()|/ @, &&"	<< std::endl
		<< "      &\\/(/&/&||/& /_/)_&/_&"	<< std::endl
		<< "   &() &\\/&|()|/&\\/ '%\" & ()"	<< std::endl
		<< "  &_\\_&&_\\ |& |&&/&__%_/_& &&"	<< std::endl
		<< "&&   && & &| &| /& & % ()& /&&"	<< std::endl
		<< " ()&_---()&\\&\\|&&-&&--%---()~"	<< std::endl
		<< "     &&     \\|||"				<< std::endl
		<< "             |||"				<< std::endl
		<< "             |||"				<< std::endl
		<< "             |||"				<< std::endl
		<< "       , -=-~  .-^- _"			<< std::endl;

}

ShrubberyCreationForm::~ShrubberyCreationForm() {};

const char* ShrubberyCreationForm::OutFileNotOpenException::what() const throw()
{
	return "OutFileNotOpenException";
}
