#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include "../includes/Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		const int 			_signGrade;
		const int			_execGrade;
		bool				_signed;

		void				setGrade(int grade);

	public:
		Form();
		Form(const Form &form);
		Form(const std::string &_name, int signGrade, int execGrade);

		const std::string&	getName() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		bool				getSigned() const;

		void				beSigned(const Bureaucrat &bureaucrat);

		~Form();

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what()const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
	};

#endif
