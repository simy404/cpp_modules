#include "CommandHandler.hpp"
#include <iostream>

void	CommandHandler::HandleCommand(std::string command)
{
	if (command == "ADD")
		Add();
	else if (command == "SEARCH")
		Search();
	else if (command == "EXIT")
		state = false;
	else
		std::cout << "Invalid Command" << std::endl;
}

std::string	CommandHandler::get_input(const std::string prompt)
{
	std::string	input = "";

	if (!state)
		return input;
	do {
		std::cout << prompt;
		std::getline(std::cin, input);
		if (std::cin.eof() ) {
			state = false;
			break;
		}
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

CommandHandler::CommandHandler()
{
	state = true;
}

void	CommandHandler::Search()
{
	int	index;

	std::cout << "Enter index to search (0-7): ";
	std::cin >> index;
	if (std::cin.eof()) {
		state = false;
		return ;
	}
}

bool	CommandHandler::get_state() const
{
	return state;
}

