#include "CommandHandler.hpp"
#include <iostream>

int	CommandHandler::handleCommand(std::string command)
{
	if (command == "ADD")
		;
	else if (command == "SEARCH")
		;
	else if (command == "EXIT")
		;
	else
		std::cout << "Invalid Command" << std::endl;
	;
}

void	CommandHandler::add()
{
	Contact	contact;

	std::cout << "Enter first name:" << std::endl;;

	phoneBook.add_contact(contact);
}
