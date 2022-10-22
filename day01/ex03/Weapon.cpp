#include "Weapon.hpp"

Weapon::Weapon(std::string  type)
{
	std::cout << "weapon constructor " << type << std::endl;
	this->type = type;
}

std::string   const& Weapon::getType()
{
	return (this->type);
}

void    Weapon::setType(std::string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destructor " << this->type << std::endl;
}