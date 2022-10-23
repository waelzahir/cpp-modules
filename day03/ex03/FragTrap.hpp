#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string &name);
		FragTrap(FragTrap const &rhs);
		FragTrap& operator = (FragTrap const &rhs);
		void highFivesGuys(void);
		void	attack(const std::string &target);
		~FragTrap();
};
#endif
