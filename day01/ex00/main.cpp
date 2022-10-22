#include <iostream>
#include "Zombie.hpp"
int delete_zombies(Zombie **zombie, int index)
{
    for (int i = 0 ; i < index ; i++)
    {
        delete zombie[i];
    }
    return 1;
}
int _main()
{
    std::string names;
    Zombie *zombie[10];
    for (int i = 0; i < 10; i++)
    {
        names = "allocated Zombie" + std::to_string(i);
        zombie[i] = newZombie(names);
        if (zombie[i] == NULL)
            return (delete_zombies(zombie, i));
        zombie[i]->announce();
        names.clear();
    }
    std::cout << std::endl;
    for (int i = 0; i < 10 ; i++)
    {
        names = "declared Zombie" + std::to_string(i);
        randomChump(names);
        names.clear();
        std::cout << std::endl;
    }
    delete_zombies(zombie, 10);
    return 0;
}

void test()
{
    system("leaks BraiiiiiiinnnzzzZ");

}
int main()
{
    atexit(test);
    _main();
}