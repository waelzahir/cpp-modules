#include "Harl.hpp"
int _main ()
{
    Harl karen;
    while(1)
    {
        std::string level;
        std::cout << "type a level" << std::endl;
        std::getline(std::cin, level);
        if (std::cin.eof())
            return (0);
        karen.complain(level);
    }
    return (0);

}
int main()
{
    _main();
    system("leaks Harl");
}