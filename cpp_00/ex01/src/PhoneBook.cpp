#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	contact_count = 0;
}

std::string	PhoneBook::get_input(const std::string prompt) const
{
	std::string	input = "";

	if (std::cin.fail() || std::cin.eof()) {
		return input;
	}

	do {
		std::cout << prompt;
		if(!std::getline(std::cin, input)) {
			std::endl(std::cout);
			break;
		}
	} while (input.empty());
	return input;
}

void PhoneBook::add_contact(Contact contact) {
	if (contact_count < 8) {
		contacts[contact_count] = contact;
		contact_count++;
	} else {
		for (int i = 0; i < 7; i++) {
			contacts[i] = contacts[i + 1];
		}
		contacts[7] = contact;
	}
}

void	PhoneBook::Add()
{
	Contact	new_contact;

	new_contact.set_first_name(get_input("Enter first name: "));
	if (new_contact.get_first_name().empty()) return;

	new_contact.set_last_name(get_input("Enter last name: "));
	if (new_contact.get_last_name().empty()) return;

	new_contact.set_nickname(get_input("Enter nickname: "));
	if (new_contact.get_nickname().empty()) return;

	new_contact.set_phone_number(get_input("Enter phone number: "));
	if (new_contact.get_phone_number().empty()) return;

	new_contact.set_darkest_secret(get_input("Enter darkest secret: "));
	if (new_contact.get_darkest_secret().empty()) return;
	add_contact(new_contact);
}

void PhoneBook::Search()
{
	// int	index;

	// std::cout << "     Index|" << "First Name|" << " Last Name|" << "  Nickname" << std::endl;
	// for (int i = 0; i < phoneBook.get_contact_count(); i++) {
	// 	Contact contact = phoneBook.get_contact(i);

	// 	std::cout << "         " << i << "|";
	// 	std::cout <<  std::setw(10) << (contact.get_first_name().length() > 10 ? contact.get_first_name().substr(0, 9) + "." : contact.get_first_name()) << "|";
	// 	std::cout <<  std::setw(10) << (contact.get_last_name().length() > 10 ? contact.get_last_name().substr(0, 9) + "." : contact.get_last_name()) << "|";
	// 	std::cout <<  std::setw(10) << (contact.get_nickname().length() > 10 ? contact.get_nickname().substr(0, 9) + "." : contact.get_nickname()) << std::endl;
	// }
	// std::cout << "Enter index to search (0-7): ";
	// std::cin >> index;
	// if (state == false)
	// 	return ;
}
