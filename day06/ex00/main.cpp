#include <iostream>
#include "Convertion.hpp"
#include <stdlib.h>
int main(int ac, char   *av[])
{

    if (ac != 2)
    {
        std::cout << "./Convert [your input]"<< std::endl;
        return 0;
    }
    Convertion action(av[1]);
    return 0;
}