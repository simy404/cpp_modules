#include <iostream>
#include "PhoneBook.hpp"

int main() {
	PhoneBook		phoneBook;
	std::string		command;

	while (!std::cin.eof() && !std::cin.fail()) {
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";

		if(!std::getline(std::cin, command)) {
			std::cout << std::endl;
			break;
		}

		if (command == "ADD") {
			phoneBook.Add();
		}
		else if (command == "SEARCH") {
			phoneBook.Search();
		}
		else if (command == "EXIT") {
			break;
		}
		else {
			std::cout << "Invalid Command" << std::endl;
		}
	}
	return 0;
}
