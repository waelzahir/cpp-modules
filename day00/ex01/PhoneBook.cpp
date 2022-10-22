#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->reached = 0;
    this->filled = 0;
}

int PhoneBook::check_entry(std::string str)
{
    int entry;
    entry = -1;
    try
    {
        entry = stoi(str);
    }
    catch (...)
    {
        return (1);
    }
    if (entry > -1 && entry < 8 && this->filled)
        return (0);
    if (entry > -1 && entry < 8 && entry < this->reached)
        return (0);
    return (1);
}

void    PhoneBook::trim_byline(int index)
{
    size_t i = 0;
    std::string line;
    line = contact[index].get_byline();
    while (i != 9)
    {
        if (i == line.size())
            break ;
        std::cout << line[i];
        i++;
    }
    if (i == 9 && line.size() != 9)
    {
        std::cout << ".";
        i++;
    }
    while (i != 10)
    {
        std::cout << " ";
        i++;
        }
}

void    PhoneBook::print_index(int index)
{
    int i = 0;
    std::cout << "|" << index;

    while (i < 9)
    {
        std::cout << " ";
        i++;
    }
}

void   PhoneBook::menu()
{
    int n;

    if (this->filled)
        n = 8;
    else
        n = this->reached;
    std::cout << "|index     |first name|last  name| NickName |" << std::endl;
    for (int i = 0; i < n; i++)
    {
        this->print_index(i);
        for (int j = 0; j < 3; j++)
        {
            std::cout << "|";
            this->trim_byline(i);
        }
        std::cout << "|";
        this->contact[i].get_reset();
        std::cout << std::endl;
        }
}

void    PhoneBook::new_contact()
{
    if (this->reached == 8)
    {
        this->filled++;
        this->start();
    }
    if (this->contact[this->reached].fill_contact() == 1)
    this->success();
}

void    PhoneBook::print_contact(int contact)
{
    std::cout << "First Name : " << this->contact[contact].get_byline() << std::endl;
    std::cout << "Last Name : " << this->contact[contact].get_byline() << std::endl;
    std::cout << "NickName : " << this->contact[contact].get_byline() << std::endl;
    std::cout << "Phone Number : "<< this->contact[contact].get_byline() << std::endl;
    std::cout << "Darkest Secret : "<< this->contact[contact].get_byline() << std::endl;
}    

void    PhoneBook::success()
{
    this->reached++;
}

void    PhoneBook::start()
{
    this->reached = 0;
}