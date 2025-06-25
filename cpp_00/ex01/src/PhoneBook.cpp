#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	total_contacts = 0;
}

void PhoneBook::add_contact(Contact contact) {
	if (total_contacts < 8) {
		contacts[total_contacts] = contact;
		total_contacts++;
	} else {
		for (int i = 0; i < 7; i++) {
			contacts[i] = contacts[i + 1];
		}
		contacts[7] = contact;
	}
}
