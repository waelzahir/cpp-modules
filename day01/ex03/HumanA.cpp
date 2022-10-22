#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    this->name = name;
    std::cout << "HumanA constructor " << name << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA destructor " << this->name << std::endl;
}

void    HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

