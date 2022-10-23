#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default constructor" << std::endl;
	this->hp = 100;
	this->ep = 100;
	this->ad = 30;
}
FragTrap::FragTrap(std::string &name): ClapTrap(name)
{
	std::cout << "ScavTrap assignment Constructor for " << this->name << std::endl;
	this->hp = 100;
	this->ep = 100;
	this->ad = 30;
}
FragTrap::FragTrap(FragTrap const &rhs) : ClapTrap()
{
	std::cout	<< "copy constructor called for" << std::endl;
	(*this) = rhs;
}
FragTrap& FragTrap::operator = (FragTrap const &rhs)
{
	this->name = rhs.name;
	this->hp = rhs.hp;
	this->ep = rhs.ep;
	this->ad = rhs.ad;
	return (*this);
}
void FragTrap::highFivesGuys(void)
{
	std::cout << "high five !!" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (!this->hp)
	{
		std::cout << "FragTrap " << this->name << " is dead\n";
		return ;
	}
	if (!this->ep)
		return ;
	std::cout << "FragTrap " << this->name << " attacks " << target << " causing " << this->ad << " points of damage!" << std::endl;
	this->ep--;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destrucor" << std::endl;
}