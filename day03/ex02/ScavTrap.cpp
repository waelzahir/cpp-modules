#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap constructor" << std::endl;
	this->hp = 100;
	this->ep = 50;
	this->ad = 20;
}

ScavTrap::ScavTrap(std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap assignment Constructor for " << this->name << std::endl;
	this->hp = 100;
	this->ep = 50;
	this->ad = 20;
}
ScavTrap::ScavTrap(ScavTrap const &rhs) : ClapTrap()
{
	std::cout	<< "copy constructor called for" << std::endl;
	(*this) = rhs;
}
ScavTrap& ScavTrap::operator = (ScavTrap const &rhs)
{
	this->name = rhs.name;
	this->hp = rhs.hp;
	this->ep = rhs.ep;
	this->ad = rhs.ad;
	return (*this);
}
void	ScavTrap::attack(const std::string &target)
{
	if (!this->hp)
	{
		std::cout << "ScapTrap " << this->name << " is dead\n";
		return ;
	}
	if (!this->ep)
		return ;
	std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->ad << " points of damage!" << std::endl;
	this->ep--;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap constructor for: " << this->name << " called" << std::endl;   
}

void ScavTrap::guardGate()
{
	if (this->hp && this->ep)
		std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}