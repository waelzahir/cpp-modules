#include "Convertion.hpp"

Convertion::Convertion(std::string str)
{
    this->str = str;
    if (this->str.size() == 0)
        return ;
    this->typeLookup();
    this->print();
}


Convertion::~Convertion()
{}

void    Convertion::typeLookup()
{
    if (this->str.size() == 1)
        return this->charLookup();
    if (this->str == "-inf" || this->str == "+inf")
        {
            this->type = FLOAT;
            return ;
        }
    if (this->nanLookup() == 1)
    {
        this->type = NANI;
        return ;
    }
    this->type = this->digitLookup();
}

void    Convertion::charLookup()
{
    if (isdigit(this->str[0]))
        this->type = INT;
    else
        this->type = CHAR;
}

int    Convertion::nanLookup()
{
    if (this->str == "nan" || this->str == "nanf")
        return 1;
    int poin = 0;
    int flo = 0;
    int digit  = 0;
    int sig = 0;
    int i = 0;
    if (this->str[0] == '-' || this->str[0] == '+')
        {
            i++;
            sig++;
        }
    while (i < (int)this->str.size())
    {
        if (this->str[i] == '.')
            poin++;
        if (this->str[i] == 'f')
            flo++;
        if (isdigit(this->str[i]))
            digit++; 
        i++;
    }
    if ((poin + flo  + sig + digit) != i)
        return 1;
    if (sig && !(this->str[0] != '-' || this->str[0] != '+'))
        return 1;
    if (flo && (this->str[i-1] != 'f'))
        return 1;
    if (flo > 1 || poin > 1)
        return 1;
    return 0;
}

 int    Convertion::digitLookup()
 {
    size_t i = this->str.size();
    if (this->str[i - 1] == 'f')
        return FLOAT;
    size_t j = 0;
    while (j < i)
    {
        if (this->str[j] == '.')
            return DOUBLE;
        j++;
    }
    return INT;
 }

 void   Convertion::print()
 {
    std::cout << "char: ";
    this->printChar();
    std::cout << "int: ";
    this->printInt();
    std::cout << "float: ";
    this->printFloat();
    std::cout << "double: ";
    this->printDouble();
 }

void    Convertion::printChar()
{
    if (this->type == CHAR)
    {
        if (isprint(this->str[0]))
            std::cout << this->str << "\n";
        else
            std::cout << "n-printable" << "\n";
        return ;
    }
    if (this->type == NANI)
    {
        std::cout << "imposible" << "\n";
        return ;
    }
    try{
        double d = std::stod(this->str);
        if (!isascii(d))
            throw 1;
        if (isprint(d))
            std::cout << static_cast<char>(d) << std::endl;
        else
            std::cout << "n-printable" << "\n";
    }
    catch (...)
    {
        std::cout << "imposible" << "\n";
    }
}
void    Convertion::printInt()
{
    if (this->type == CHAR)
            std::cout  << static_cast<int>(this->str[0]) << std::endl; 
    else if (this->type == NANI)
        std::cout << "imposible" << std::endl;
    else
        try
        {
            double  d = std::stod(this->str);
            if (d <= INT_MAX && d >= INT_MIN)
            {
                std::cout << static_cast<int> (d) << std::endl;
            }
            else
                throw 1;
        }
        catch(...)
        {
            std::cerr << "imposible" << '\n';
        }
}
void    Convertion::printFloat()
{
    if (this->type == CHAR)
            std::cout  << static_cast<float>(this->str[0]) << "f" << std::endl; 
    else if (this->type == NANI)
        std::cout << "nanf" << std::endl;
    else
        try
        {
            float  d = std::stof(this->str);
            if (std::isinf(d))
            {
                if (this->str[0] == '-')
                    std::cout << "-inff" << std::endl;
                else
                    std::cout << "inff" << std::endl;
            }
            else
                std::cout << d <<"f" << std::endl;
        }
        catch(...)
        {
            if (this->str[0] == '-')
                    std::cout << "-inff" << std::endl;
                else
                    std::cout << "inff" << std::endl;
        }
}
void    Convertion::printDouble()
{
    if (this->type == CHAR)
            std::cout  << static_cast<double>(this->str[0]) << std::endl; 
    else if (this->type == NANI)
        std::cout << "nan" << std::endl;
    else
        try
        {
            double  d = std::stod(this->str);
            if (std::isinf(d))
            {
                if (this->str[0] == '-')
                    std::cout << "-inf" << std::endl;
                else
                    std::cout << "inf" << std::endl;
            }
            else
                std::cout << d << std::endl;
        }
        catch(...)
        {
           if (this->str[0] == '-')
                    std::cout << "-inf" << std::endl;
                else
                    std::cout << "inf" << std::endl;
        }
}