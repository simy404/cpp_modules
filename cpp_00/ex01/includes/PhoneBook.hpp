#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	Contact	contacts[8];
	int		contact_count;

	private:
		void	display_contact(int index) const;
		void	display_contacts() const;
		void	add_contact(Contact contact);

		std::string	get_input(const std::string prompt) const;

	public:
		PhoneBook();
		void	Add();
		void	Search();
};

#endif
