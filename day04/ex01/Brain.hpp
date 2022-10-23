#ifndef	BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(Brain const &rhs);
		Brain& operator = (Brain const &rhs);
		void	setIdea(std::string &idea);
		~Brain();
};

#endif