#include "Convertion.hpp"

Convertion::Convertion(std::string string)
{
    this->str = string;
    if (this->str.size() == 0)
        return ;
    this->getType();
    this->printChar();
    this->printInt();
    this->printFloat();
    this->printDouble();
}

Convertion::~Convertion(){}

void    Convertion::getType()
{
    if (this->str == "nan" || this->str == "nanf")
        {
            this->type = NAN;
            return ;
        } 
    size_t i = 0;
    int sign = 0;
    int f = 0;
    int point = 0;
    int num = 0;
    if (this->str.size() == 1)
    {
        this->simpleCase();
        return ;
    }
    if (this->str[0] == '-' || this->str[0] == '+')
    {
        sign++;
        i++;
    }
    while (i < this->str.size())
    {
        if (this->str[i] == '.')
            point++;
        if (this->str[i] == 'f')
            f++;
        if (isdigit(this->str[i]))
            num++;
        i++;
    }
    if ((int)i != (sign + f + point + num) || f >1 || point > 1)
            this->type = BUG;
    else if (f)
        this->type = FLOAT;
    else if (point)
        this->type = DOUBLE;
    else
        this->type = INT;
    if (this->str[this->str.size()] == '-' || this->str[this->str.size()] == '+')
        this->type = NAN;
}
void    Convertion::simpleCase()
{
    if (isdigit(this->str[0]))
        this->type = INT;
    else
        this->type = CHAR;
}
void    Convertion::printChar()
{
    if (this->type == CHAR && isprint(this->str[0]))
        std::cout << "char: "<< this->str[0] << std::endl;
    else if (this->type == CHAR && !isprint(this->str[0]))
        std::cout << "char: "<< "not printable" << std::endl;
    else if (this->type != CHAR)
    {
        try
        {
            if (this->type == INT)
            {
                std::cout << "char: ";
                int i = std::stoi(this->str);
                if (isprint(i)) 
                    std::cout << char(i) << "\n";
                else if (isascii(i))
                    std::cout << "non printable\n";
                else 
                    std::cout << "imposible\n";                
            }
            if (this->type == FLOAT)
            {
                std::cout << "char: ";
                float i = std::stof(this->str);
                if (isprint(i)) 
                    std::cout << char(i) << "\n";
                else if (isascii(i))
                    std::cout << "non printable\n";
                else 
                    std::cout << "imposible\n";            
            }
             if (this->type == DOUBLE)
            {
                std::cout << "char: ";
                float i = std::stod(this->str);
                if (isprint(i)) 
                    std::cout << char(i) << "\n";
                else if (isascii(i))
                    std::cout << "non printable\n";
                else 
                    std::cout << "imposible\n";   
            }
            if (this->type == NAN || this->type == BUG)
                std::cout << "char: impossible\n";
        }
        catch(...)
        {
            std::cout << "impossible\n";
        }
    }

}

void    Convertion::printInt()
{
    if (this->type == CHAR)
        std::cout << "int: "<< (int)this->str[0] << std::endl;
    else if (this->type != CHAR)
    {
        try
        {
            if (this->type == INT)
            {
                std::cout << "int: ";
                int i = std::stoi(this->str);
                std::cout << i << "\n";  
            }
            if (this->type == FLOAT)
            {
                std::cout << "int: ";
                float i = std::stof(this->str);
                if (i <= INT_MAX || i >= INT_MIN)
                    std::cout << (int)i << std::endl;
                else
                    std::cout << "imposible\n";      
            }
             if (this->type == DOUBLE)
            {
                std::cout << "int: ";
                double i = std::stod(this->str);
                if (i <= INT_MAX || i >= INT_MIN)
                    std::cout << (int)i << std::endl;
                else
                    std::cout << "imposible\n";   
            }
            if (this->type == NAN || this->type == BUG)
                std::cout << "int: impossible\n";
        }
        catch(...)
        {
            std::cout << "impossible\n";
        }
    }
}

void    Convertion::printFloat()
{
    if (this->type == CHAR)
        std::cout << "float: "<< (float)this->str[0] << "f" << std::endl;
    else if (this->type != CHAR)
    {
        try
        {
            if (this->type == FLOAT || this->type == INT)
            {
                std::cout << "float: ";
                float i = std::stof(this->str);
                std::cout << i << "f\n";   
            }
             if (this->type == DOUBLE)
            {
                std::cout << "float: ";
                float i = std::stof(this->str);
                std::cout << i << "f" << std::endl;

            }
            if (this->type == NAN || this->type == BUG)
                std::cout << "float: nanf\n";
        }
        catch(...)
        {
            if (this->type == BUG || this->type == NAN)
                {
                    std::cout << "nanf\n";
                    return ;
                }
            if (this->str[0] == '-')
                {
                    std::cout << "-inff\n";
                    return ;
                }
                std::cout << "+inff\n";
        }
    }
}
void    Convertion::printDouble()
{
    if (this->type == CHAR)
        std::cout << "double: "<< (double)this->str[0]  << std::endl;
    else if (this->type != CHAR)
    {
        try
        {
            std::cout << "double: ";
            if (this->type  == NAN || this->type == BUG)
                throw 1;
            double f = std::stod(this->str);
            std::cout << f << std::endl;
        }
        catch(...)
        {
            if (this->type == BUG || this->type == NAN)
                {
                    std::cout << "nan\n";
                    return ;
                }
            if (this->str[0] == '-')
                {
                    std::cout << "-inf\n";
                    return ;
                }
                std::cout << "+inf\n";
        }
    }
}