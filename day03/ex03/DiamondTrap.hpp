#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap 
{
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(std::string &name);
		DiamondTrap(DiamondTrap const &rhs);
		DiamondTrap& operator =(DiamondTrap const &rhs);
				using ScavTrap::attack;

		void whoAmI();
		~DiamondTrap();
};
#endif