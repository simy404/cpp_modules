#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
class Brain
{
	std::string	ideas[100];

	public:
		Brain();
		Brain(const Brain &brain);
		Brain &operator=(const Brain &brain);

		void set_idea(int index, const std::string& idea);
		std::string	get_idea(int index) const;
		~Brain();

};


#endif
