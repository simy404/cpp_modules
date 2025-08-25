#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	_target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(const ShrubberyCreationForm& form);

		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& form);

		void		execute(Bureaucrat const & executor) const;

		~ShrubberyCreationForm();

		class OutFileNotOpenException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

#endif
