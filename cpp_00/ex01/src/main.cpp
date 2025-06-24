#include <limits.h>
#include <iostream>
#include "CommandHandler.hpp"

int main() {
	CommandHandler	commandHandler;
	std::string		command;
	bool			state;

	state = true;
	while (state) {
		std::cout << "Enter command (ADD/SEARCH/EXIT): ";
		std::cin >> command;
		state = commandHandler.handleCommand(command);
	}
	return 0;
}
