#include "CommandHandler.hpp"

void	CommandHandler::handleCommand(std::string command)
{
	if (command == "ADD")
		;
	else if (command == "SEARCH")
		;
	else if (command == "EXIT")
		;
	else
		;
}

void	CommandHandler::add()
{
	Contact contact;


	phoneBook.add_contact(contact);
}
