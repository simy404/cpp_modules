#ifndef COMMANDHANDLER_HPP
# define COMMANDHANDLER_HPP

#include "PhoneBook.hpp"

class	CommandHandler
{
	PhoneBook	phoneBook; /*I think I need dependency injection*/

	private:
		void	Add();
		void	Search();
		void	Exit();

		std::string get_input(std::string prompt);

	public:
		int	handleCommand(std::string command);
};

#endif
