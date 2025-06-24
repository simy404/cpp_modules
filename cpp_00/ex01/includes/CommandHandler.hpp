#ifndef COMMANDHANDLER_HPP
# define COMMANDHANDLER_HPP

#include "PhoneBook.hpp"

class	CommandHandler
{
	PhoneBook	phoneBook; /*I think I need dependency injection*/

	private:
		void	Add();
		void	Search();

		std::string get_input(std::string prompt);

	public:
		int	HandleCommand(std::string command);
};

#endif
