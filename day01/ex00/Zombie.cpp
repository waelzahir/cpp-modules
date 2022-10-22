#include "Zombie.hpp"

Zombie::Zombie(std::string zombie)
{
	std::cout << "Zombie Constructor " << zombie << std::endl;
	this->name = zombie;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "desctructor for " << this->name << " called" << std::endl;
}