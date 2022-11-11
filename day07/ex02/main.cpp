#include <iostream>
#include "Array.hpp"

int _main()
{
    //int *a = new int();
   // std::cout << a << std::endl;
    Array<int> arr(600);
    int i = 0;
    std::string a("ouail");
    while (i < 600)
        {
            //arr[i] = a;
            i++;
        }
    i = 0;
    while (i < 600)
    {
        std::cout << arr[i] << std::endl;
        i++;
    }
    
    std::cout << arr[99] << "hna gna" << std::endl;
    
    return 0;
}

int main ()
{
    _main();
    system("leaks Array");
}