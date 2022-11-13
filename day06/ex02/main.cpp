#include "Typeid.hpp"

int main()
{
    Base *p = generate();
    Base& ref = *p;

    identify(p);
    identify(ref);
}