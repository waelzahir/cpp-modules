
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default Constuctor" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs)
{
	std::cout << "WrongAnimal copy Constructor" << std::endl;
	(*this) = rhs;
}
std::string   WrongAnimal::getType() const
{
	return this->type;
}
WrongAnimal&	WrongAnimal::operator = (WrongAnimal const &rhs)
{
	this->type = rhs.type;
	return (*this);
}
void	WrongAnimal::makeSound() const
{
	std::cout << "i'm The Original, Not" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor"<< std::endl;
}

WrongCat::WrongCat()
{
	std::cout << "WrongCat Constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const &rhs)
{
	std::cout << "WrongCat copy Constructor" << std::endl;
	(*this) = rhs;
}

WrongCat& WrongCat::operator = (WrongCat const &rhs)
{
	this->type = rhs.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong meoww!!!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor" << std::endl;

}