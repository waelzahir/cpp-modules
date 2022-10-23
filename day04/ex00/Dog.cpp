#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor" << std::endl;
	this->type = "Dog";
}
Dog::Dog(Dog const &rhs)
{
	std::cout << "Dog copy Constructor" << std::endl;
	(*this) = rhs; 
}
Dog& Dog::operator = (Dog const &rhs)
{
	this->type = rhs.type;
	return (*this);
}
void	Dog::makeSound() const
{
	std::cout << "wooof!!" << std::endl;
}
Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
}
