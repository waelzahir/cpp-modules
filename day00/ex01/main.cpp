#include "PhoneBook.hpp"

int main()
{
    PhoneBook book;
    std::string prompt;
    while (1)
    {
        std::cout << "please input a command : ";
        std::getline(std::cin, prompt);
        if(std::cin.eof())
            return 0;
        if (prompt == "ADD")
        {
            book.new_contact();
        }
        else if (prompt == "SEARCH")
        {
            std::string choice;
            book.menu();
            std::cout << "choose an entry : ";
            std::getline(std::cin, choice);
            if(std::cin.eof())
                return 0;
            if (book.check_entry(choice) == 1)
            {
                std::cout << "wrong entry!!" << std::endl;
            }
            else
                book.print_contact(choice[0] - 48);
            choice.clear();
        }
        else if (prompt == "EXIT")
        {
            return 0;
        }
        prompt.clear();
    }
}