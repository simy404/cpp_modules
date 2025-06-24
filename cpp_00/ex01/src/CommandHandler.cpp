#include "CommandHandler.hpp"
#include <iostream>

int	CommandHandler::handleCommand(std::string command)
{
	if (command == "ADD")
		Add();
	else if (command == "SEARCH")
		Search();
	else if (command == "EXIT")
		Exit();
	else
		std::cout << "Invalid Command" << std::endl;
}

std::string CommandHandler::get_input(std::string prompt)
{
	std::string input;

	std::cout << prompt << std::endl;
	getline(std::cin, input);
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
