#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructor" << std::endl;
	this->type = "Cat";
}
Cat::Cat(Cat const &rhs)
{
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
	std::cout << "Cat destructor" << std::endl;
}