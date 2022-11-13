#include "Typeid.hpp"
Base::~Base()
{
    std::cout << "Base dest";
}

Base * generate(void)
{
    srand(time(NULL));
    int i = rand() % 10;
    if (i < 3)
        return new (std::nothrow) A;
    else if (i >= 3 && i < 7)
        return new (std::nothrow) B;
    else
         return new (std::nothrow) C;
}
void identify(Base* p)
{
    A*  ptr = dynamic_cast<A*> (p);
    if (ptr)
    {
        std::cout << "the type is A\n";
        return ;
    }
    B*  ptr1 = dynamic_cast<B*> (p);
    if (ptr1)
    {
        std::cout << "the type is B\n";
        return ;
    }
    C*  ptr2 = dynamic_cast<C*> (p);
    if (ptr2)
    {
        std::cout << "the type is C\n";
        return ;
    }
}
void identify(Base& p)
{
    try
    {
        A&  ref = dynamic_cast<A&> (p);
        std::cout << "the type is A\n";
        throw ref;
    }
    catch (...)
    {
    }
     try
    {
        B&  ref = dynamic_cast<B&> (p);
        std::cout << "the type is B\n";
        throw ref;
    }
    catch (...)
    {
    }
     try
    {
        C&  ref = dynamic_cast<C&> (p);
        std::cout << "the type is C\n";
        throw ref;
    }
    catch (...)
    {
    }
}