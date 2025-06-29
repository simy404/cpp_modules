#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>

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

void	PhoneBook::add_contact(Contact contact)
{
	if (contact_count < 8) {
		contacts[contact_count++] = contact;
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

std::string	PhoneBook::format_output(const std::string str) const
{
	return str.length() > 10 ? str.substr(0, 9) + "." : str;
}

void	PhoneBook::display_contacts() const
{
	std::cout << "     Index|" << "First Name|" << " Last Name|" << "  Nickname" << std::endl;

	for (int i = 0; i < contact_count; i++) {
		std::cout << std::setw(10) << i << "|"
				<< std::setw(10) << format_output(contacts[i].get_first_name()) << "|"
				<< std::setw(10) << format_output(contacts[i].get_last_name()) << "|"
				<< std::setw(10) << format_output(contacts[i].get_nickname()) << std::endl;
	}
}

void	PhoneBook::display_contact(int index) const
{
	std::cout << "First Name: " << contacts[index].get_first_name() << std::endl
		<< "Last Name: " << contacts[index].get_last_name() << std::endl
		<< "Nickname: " << contacts[index].get_nickname() << std::endl
		<< "Phone Number: " << contacts[index].get_phone_number() << std::endl
		<< "Darkest Secret: " << contacts[index].get_darkest_secret() << std::endl;
}

int	PhoneBook::get_input_index(const std::string prompt) const {
	std::string input = get_input(prompt);
	if (input.empty()) {
		return -1;
	}
	std::stringstream 	ss(input);
	int index;

	if (!(ss >> index)) {
		return -1;
	}
	return index;
}

void PhoneBook::Search() {
	int	index;

	display_contacts();

	if (contact_count == 0) {
		std::cout << "No contacts available." << std::endl;
		return;
	}
	index = get_input_index("Enter index of contact to display (0-7): ");
	if (index < 0 || index >= contact_count) {
		std::cout << "Invalid index." << std::endl;
		return;
	}
	display_contact(index);
}
