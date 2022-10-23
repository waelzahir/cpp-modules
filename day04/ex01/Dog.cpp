#include "Dog.hpp"


Dog::Dog()
{
	std::cout << "Dog constructor" << std::endl;
	this->type = "Dog";
	this->brain = new (std::nothrow) Brain();
}
Dog::Dog(Dog const &rhs)
{
	this->brain = new (std::nothrow) Brain(*rhs.brain);
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
	if (brain)
		delete brain;
	std::cout << "Dog Destructor" << std::endl;
}
