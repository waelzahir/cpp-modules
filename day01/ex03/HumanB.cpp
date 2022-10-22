#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
	std::cout << "HumanB contructor " << name <<std::endl;
}
void    HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
void    HumanB::attack()
{
	std::cout	<< this->name << " attacks with their ";
	if (this->weapon)
		std::cout << this->weapon->getType() ;
	std::cout << std::endl;
}
HumanB::~HumanB()
{
	std::cout << "HumanB destructor " << this->name << std::endl;
}
