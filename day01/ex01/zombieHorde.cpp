#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *horde;
    
    horde = new  (std::nothrow) Zombie[N];

    if (!horde)
        return (NULL);
    for (int i = 0; i < N; i++)
    {
        horde[i].setName(name);
        horde[i].announce();
    }
    return (horde);
}