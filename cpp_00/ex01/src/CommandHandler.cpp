#include "CommandHandler.hpp"
#include <iostream>

int	CommandHandler::HandleCommand(std::string command)
{
	if (command == "ADD")
		Add();
	else if (command == "SEARCH")
		Search();
	else if (command == "EXIT")
		return (0);
	else
		std::cout << "Invalid Command" << std::endl;
	return (1);
}

std::string	CommandHandler::get_input(const std::string prompt)
{
	std::string	input;

	do {
		std::cout << prompt;
		std::getline(std::cin, input);
		if (std::cin.eof())
			std::exit(0);
	} while (input.empty());
	return input;
}

void	CommandHandler::Add()
{
	phoneBook.add_contact(Contact(
		get_input("Enter first name: "),
		get_input("Enter last name: "),
		get_input("Enter nickname: "),
		get_input("Enter phone number: "),
		get_input("Enter darkest secret: ")
	));
}

void	CommandHandler::Search()
{
	int	index;

	std::cout << "Enter index to search (0-7): ";
	std::cin >> index;
}
