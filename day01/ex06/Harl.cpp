#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "{ Debug }" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- \nketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "{ Info }" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put \n enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "{ Warning }" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for \n years whereas you started working here since last month." << std::endl ;

}

void    Harl::error(void)
{
    std::cout << "{ Error }" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain( std::string level)
{
    int i;
    void    (Harl::*memberF[4])(void);
    memberF[0] = &Harl::debug;
    memberF[1] = &Harl::info;
    memberF[2] = &Harl::warning;
    memberF[3] = &Harl::error;

    std::string levels[] = {"DEBUG","INFO","WARNING","ERROR"};
    for (i = 0 ; i < 5 ; i++)
    {
        if (levels[i] == level)
                break ;
    }
    switch(i)
    {
        case 0:
            (this->*memberF[0])();
        case 1:
            (this->*memberF[1])();
        case 2:
            (this->*memberF[2])();
        case 3:
            (this->*memberF[3])();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}