#include "Convertion.hpp"
int main(int ac, char   **av)
{
    if (ac == 2)
        Convertion conv(av[1]);
    else
        std::cout << "./convert data\n" ;
}