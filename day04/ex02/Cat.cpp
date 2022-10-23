#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructor" << std::endl;
	this->type = "Cat";
	this->brain = new (std::nothrow) Brain();
}
Cat::Cat(Cat const &rhs)
{
	this->brain = new (std::nothrow) Brain(*rhs.brain);
	std::cout << "Cat copy constructor" << std::endl;
	(*this) = rhs;
}

Cat& Cat::operator = (Cat const &rhs)
{
	this->type = rhs.type;
	return (*this);
}
void	Cat::makeSound() const
{
	std::cout << "meow!!" << std::endl;
}
Cat::~Cat()
{
	if (brain)
		delete brain;
	std::cout << "Cat destructor" << std::endl;
}