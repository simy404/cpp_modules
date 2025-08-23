#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>

class	Bureaucrat
{
	private:
		const std::string	name;
		int					grade;

		void				setGrade(int _grade);

	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &bureaucrat);
		Bureaucrat(const std::string &_name, int _grade);

		Bureaucrat		&operator=(const Bureaucrat &bureaucrat);

		const std::string&	getName() const;
		int					getGrade() const;

		void			increment();
		void			decrement();

		~Bureaucrat();

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
