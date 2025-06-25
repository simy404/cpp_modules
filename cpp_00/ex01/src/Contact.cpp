#include "Contact.hpp"

void	Contact::set_first_name(std::string first_name)
{
	_first_name = first_name;
}

void	Contact::set_last_name(std::string last_name)
{
	_last_name = last_name;
}

void	Contact::set_nickname(std::string nickname)
{
	_nickname = nickname;
}

void	Contact::set_phone_number(std::string phone_number)
{
	_phone_number = phone_number;
}

void	Contact::set_darkest_secret(std::string darkest_secret)
{
	_darkest_secret = darkest_secret;
}

Contact::Contact()
{
	_first_name = "";
	_last_name = "";
	_nickname = "";
	_phone_number = "";
	_darkest_secret = "";
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	_first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_phone_number = phone_number;
	_darkest_secret = darkest_secret;
}
