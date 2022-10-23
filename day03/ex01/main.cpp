#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::string name1("strong 1");
	std::string name2("weak 2");

	ScavTrap c1(name1), c2(name2);
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
	c2.guardGate();
	c1.guardGate();

}