#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string	_target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& form);

		RobotomyRequestForm& operator=(const RobotomyRequestForm& form);

		void	execute(Bureaucrat const & executor) const;

		~RobotomyRequestForm();
};

#endif
