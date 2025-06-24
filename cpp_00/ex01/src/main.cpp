#include <limits.h>
#include <iostream>
#include "PhoneBook.hpp"
#include "CommandHandler.hpp"

int main() {
	CommandHandler	CommandHandler;
	std::string		command;
	bool			state;

	state = true;
	while (state) {
		std::cout << "Enter command (ADD/SEARCH/EXIT): ";
		std::cin >> command;
		state = CommandHandler.handleCommand(command);
	}
	return 0;
}
