#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string	_target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(const PresidentialPardonForm& form);

		PresidentialPardonForm& operator=(const PresidentialPardonForm& form);

		void	execute(Bureaucrat const & executor) const;

		~PresidentialPardonForm();
};

#endif
