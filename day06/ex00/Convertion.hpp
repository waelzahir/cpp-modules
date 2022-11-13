#ifndef CONV
#define CONV
#include <iostream>
#include <limits.h>
enum t
{
    PADD,
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    NAN,
    BUG
};

class Convertion
{
private:
    std::string str;
    int type;
public:
    Convertion(std::string str = "");
    ~Convertion();
    void    getType();
    void    simpleCase();
    void    printChar();
    void    printInt();
    void    printFloat();
    void    printDouble();

};


#endif