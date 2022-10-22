# ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>


class Contact
{
    private:
        std::string used_fields[5];
        std::string field[5];
        int magic;
    public:
        Contact();
        void clean_contact(std::string *str);
        int field_check(std::string str);
        void    copy_fields();
        int fill_contact();
        void    get_reset();
        std::string& get_byline();
        ~Contact();
};

# endif