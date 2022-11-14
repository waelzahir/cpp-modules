#ifndef CONV
#define CONV
#include <iostream>
#include <limits.h>
#include <cmath>


enum t
{
    PADD,
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    NANI,
};

class Convertion
{
private:
    std::string str;
    int type;
public:
    Convertion(std::string str = "");
    ~Convertion();
    void    typeLookup();
    void    charLookup();
    int    digitLookup();
    int     nanLookup();
    void    print();
    void    printChar();
    void    printInt();
    void    printFloat();
    void    printDouble();
};


#endif