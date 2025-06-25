#ifndef COMMANDHANDLER_HPP
# define COMMANDHANDLER_HPP

#include "PhoneBook.hpp"

class	CommandHandler
{
	PhoneBook	phoneBook;
	bool		state;

	private:
		void	Add();
		void	Search();

	public:
		CommandHandler();
		void	HandleCommand(std::string command);
		bool	get_state() const;

		std::string	get_input(std::string prompt);
};

#endif
