#ifndef	CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		unsigned	int	hp;
		unsigned 	int	ep;
		unsigned	int	ad;
	public:
		ClapTrap();
		ClapTrap(std::string &name);
		ClapTrap(ClapTrap const &rhs);
		ClapTrap&	operator = (ClapTrap const &rhs);
		void	attack(const std::string &target);
		void	takeDamege(unsigned	int	amount);
		void	beRepaired(unsigned int amount);
		~ClapTrap();
};
#endif