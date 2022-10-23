#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(Brain const &rhs)
{
	std::cout << "Brain copy Constructor" << std::endl;
	(*this) = rhs;
}

Brain& Brain::operator = (Brain const &rhs)
{
	for (int i = 0; i < 100 ; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}

void	Brain::setIdea(std::string &idea)
{
	static int i;

	if (i == 100)
		i = 0;
	this->ideas[i] = idea;
	i++; 
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl; 
}