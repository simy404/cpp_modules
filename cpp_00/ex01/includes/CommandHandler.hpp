#ifndef COMMANDHANDLER_HPP
# define COMMANDHANDLER_HPP

#include "PhoneBook.hpp"

class	CommandHandler
{
	PhoneBook	phoneBook; /*I think I need dependency injection*/

	private:
		void	add();
		void	search();
		void	exit();

	public:
		int	handleCommand(std::string command);
};

#endif
