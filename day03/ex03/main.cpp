#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	std::string name1("strong 1");
	std::string name2("weak 2");

	FragTrap c1(name1), c2(name2);
	DiamondTrap d1(name1);
	c1.attack(name2);
	c1.attack(name2);
	c1.attack(name2);
	

	c2.takeDamege(10);
	c2.takeDamege(10);
	c2.takeDamege(10);
	c2.takeDamege(10);
	c2.takeDamege(10);
	c2.takeDamege(10);
	c2.takeDamege(10);
	c2.takeDamege(10);
	c2.takeDamege(10);
	c2.takeDamege(10);
	c2.takeDamege(10);
	c2.takeDamege(10);
	c2.beRepaired(10);;
	c2.attack(name1);
	c1.beRepaired(20);
	//c2.guardGate();
	//c1.guardGate();
	c1.highFivesGuys();
	c2.highFivesGuys();
	d1.whoAmI();
	d1.attack(name2);
}