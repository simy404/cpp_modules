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
		if(!std::getline(std::cin, input)) {
			std::endl(std::cout);
			state = false;
			break;
		}
	} while (input.empty());
	return input;
}

void	CommandHandler::Add()
{
	std::string first_name, last_name, nickname, phone, secret;

	first_name = get_input("Enter first name: ");
	last_name = get_input("Enter last name: ");
	nickname = get_input("Enter nickname: ");
	phone = get_input("Enter phone number: ");
	secret = get_input("Enter darkest secret: ");

	if (state == true)
		phoneBook.add_contact(Contact(first_name, last_name, nickname, phone, secret));
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

