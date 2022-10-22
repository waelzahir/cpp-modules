#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"


class PhoneBook
{
    private:
        Contact contact[8];
        int     reached;
        int     filled;
    public:
        PhoneBook();
        int     check_entry(std::string str);
        void    trim_byline(int index);
        void    print_index(int index);
        void    menu();
        void    new_contact();
        void    print_contact(int contact);
        void    success();
        void    start();
};
#endif