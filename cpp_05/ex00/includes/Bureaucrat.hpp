#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>

class	Breaucrat
{
	private:
		const std::string	name;
		int					grade;

	public:
		Breaucrat();
		Breaucrat(const Breaucrat &breucrat);
		Breaucrat &operator=(const Breaucrat &breucrat);

		~Breaucrat();
};

#endif
