#include <limits.h>
#include <iostream>
#include "CommandHandler.hpp"

int main() {
	CommandHandler	commandHandler;
	std::string		command;

	do {
		command = commandHandler.get_input("Enter command (ADD/SEARCH/EXIT): ");
		commandHandler.HandleCommand(command);
	} while (commandHandler.get_state());
	return 0;
}
