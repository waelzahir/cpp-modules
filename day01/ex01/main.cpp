#include <iostream>
#include "Zombie.hpp"

int _main()
{
    Zombie *zombie = zombieHorde(3, "wahhh");
    if (!zombie)
        return (1);
    delete [] zombie;
    return (0);
}
int main()
{
    _main();
    system("leaks Horde");
}