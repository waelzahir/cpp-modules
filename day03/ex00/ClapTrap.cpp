#include "ClapTrap.hpp"


ClapTrap::ClapTrap(): hp(10), ep(10), ad(0)
{
	std::cout << "Default constructor " << std::endl;
}
ClapTrap::ClapTrap(std::string &name) : name(name), hp(10), ep(10), ad(0)
{
	std::cout << "ClapTrap assignment Constructor for: " << this->name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &rhs)
{
	std::cout	<< "copy constructor called for: " << this->name << std::endl;
	(*this) = rhs;
}

ClapTrap&	ClapTrap::operator = (ClapTrap const &rhs)
{
	this->name = rhs.name;
	this->hp = rhs.hp;
	this->ep = rhs.ep;
	this->ad = rhs.ad;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (!this->hp)
	{
		std::cout << "ClapTrap " << this->name << " is dead\n";
		return ;
	}
	if (!this->ep)
		return ;
	std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->ad << " points of damage!" << std::endl;
	this->ep--;
}
void	ClapTrap::takeDamege(unsigned	int	amount)
{
	if (!this->hp)
	{
		std::cout << "ClapTrap " << this->name << " is dead\n";
		return ;
	}
	if (!this->ep)
		return ;
	std::cout << "ClapTrap " << this->name << " took " << amount <<" of damage\n";
	if (this->hp <= amount)
			this->hp = 0;
	else
		this->hp -= amount;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->hp)
	{
		std::cout << "ClapTrap " << this->name << " is dead\n";
		return ;
	}
	if (!this->ep)
		return ;
	std::cout << "ClapTrap " << this->name << " repaired with " << amount << " of points \n";
	this->hp += amount;
	this->ep--;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor for: " << this->name << std::endl;
}