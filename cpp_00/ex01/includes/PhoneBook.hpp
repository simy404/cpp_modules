#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	Contact	contacts[8];
	int		total_contacts;

	public:
		PhoneBook();
		void	add_contact(Contact contact);
		Contact	get_contact(int index) const;
};

#endif
