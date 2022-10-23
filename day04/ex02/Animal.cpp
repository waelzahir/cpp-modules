#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal Default Constructor" << std::endl;
}

Animal::Animal(Animal const &rhs)
{
	std::cout << "Animal Copy Constructor" << std::endl;
	(*this) = rhs;
}

void	Animal::makeSound() const
{
	std::cout << "i'm The Original" << std::endl;
}
Animal&	Animal::operator = (Animal const &rhs)
{
	this->type = rhs.type;
	return (*this);
}
Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}