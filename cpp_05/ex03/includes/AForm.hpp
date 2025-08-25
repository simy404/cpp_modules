#ifndef AFORM_HPP
# define AFORM_HPP

#include <string>

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		const int 			_signGrade;
		const int			_execGrade;
		bool				_signed;

		static int			validateGrade(int grade);

	protected:
		void				validateExecutor(const Bureaucrat &Bureaucrat) const;

	public:
		AForm();
		AForm(const AForm &form);
		AForm(const std::string &_name, int signGrade, int execGrade);

		AForm		&operator=(const AForm &Aform);

		const std::string&	getName() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		bool				getSigned() const;

		void				beSigned(const Bureaucrat &bureaucrat);
		virtual void		execute(Bureaucrat const & executor) const = 0;

		virtual ~AForm();

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

		class FormIsNotSignException : public std::exception
		{
			public:
				const char* what() const throw();
		};
	};

#endif
