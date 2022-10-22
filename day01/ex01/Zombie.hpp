#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>


class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string zombie);
        void    setName(std::string zombie);
        void    announce(void);
        ~Zombie();
};
Zombie* zombieHorde( int N, std::string name );

#endif