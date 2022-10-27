#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Diamond Default constructor" << std::endl;
	this->hp = FragTrap::hp;
	this->ep = ScavTrap::ep;
	this->ad = FragTrap::ad;
}

DiamondTrap::DiamondTrap(std::string &name)
{
	std::cout << "Diamond assignmnt constructor" << std::endl;
	this->name = name;
	ClapTrap::name = name + "_clap_suffix";
	std::cout << this->hp << " " << this->ep << " " << this->ad << std::endl;
} 
DiamondTrap::DiamondTrap(DiamondTrap const &rhs)
{
	std::cout << "Diamond Copy constructor" << std::endl;
	(*this) = rhs;
}
DiamondTrap& DiamondTrap::operator =(DiamondTrap const &rhs)
{
	this->name = rhs.name;
	ClapTrap::name = rhs.name + "_clap_suffix";
	this->hp = rhs.hp;
	this->ep = rhs.ep;
	this->ad = rhs.ad;
	return (*this);
}
void DiamondTrap::whoAmI()
{
	std::cout << "Diamond name " << this->name << std::endl;
	std::cout << "Clap name " << ClapTrap::name << std::endl;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond destructor" << std::endl;
}