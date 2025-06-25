#ifndef COMMANDHANDLER_HPP
# define COMMANDHANDLER_HPP

#include "PhoneBook.hpp"

class	CommandHandler
{
	PhoneBook	phoneBook; /*I think I need dependency injection*/
	bool		state;

	private:
		void	Add();
		void	Search();

		std::string	get_input(std::string prompt);

	public:
		CommandHandler();
		void	HandleCommand(std::string command);
		bool	get_state() const;
};

#endif
