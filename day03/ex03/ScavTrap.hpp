#ifndef	SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"


class ScavTrap : public virtual	ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string &name);
		ScavTrap(ScavTrap const &rhs);
		ScavTrap& operator = (ScavTrap const &rhs);
		void	attack(const std::string &target);
		void guardGate();
		~ScavTrap();
};
#endif