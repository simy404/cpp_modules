#include <limits.h>
#include <iostream>
#include "CommandHandler.hpp"

int main() {
	CommandHandler	commandHandler;
	std::string		command;

	do {
		std::cout << "Enter command (ADD/SEARCH/EXIT): ";
		getline(std::cin, command);
		commandHandler.HandleCommand(command);
	} while (commandHandler.get_state());
	return 0;
}
