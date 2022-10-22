#include "Contact.hpp"

Contact::Contact()
{
    this->magic = 0;
}

void	Contact::clean_contact(std::string *str)
{
    for (int i = 0 ; i < 5; i++)
        {
            str[i].clear();
        }
}
int	Contact::field_check(std::string str)
{
    size_t i;

	if (str.size() == 0)
		return (1);
	for (i = 0 ; i < str.size(); i++)
	{
		if (!isspace(str[i]))
			break ;
	}
	if (i != str.size())
		return (0);
	return (1);
}

void	Contact::copy_fields()
{
	for (int i = 0; i < 5; i++)
	{
		this->used_fields[i] = this->field[i];
	}
}

int Contact::fill_contact()
{
    std::cout << "enter the first name : ";
    std::getline(std::cin, this->field[0]);
    if(std::cin.eof())
        return 0;
    std::cout << "enter the last name : ";
    std::getline(std::cin, this->field[1]);
    if(std::cin.eof())
        return 0;
    std::cout << "enter the nickname : ";
    std::getline(std::cin, this->field[2]);
    if(std::cin.eof())
        return 0;
    std::cout << "enter the number : ";
    std::getline(std::cin, this->field[3]);
    if(std::cin.eof())
        return 0;
    std::cout << "enter the darkest secret : ";
    std::getline(std::cin, this->field[4]);
    if(std::cin.eof())
        return 0;
    for (int i = 0; i < 5; i++)
    {
        if (this->field_check(this->field[i]))
            {
                std::cout << "you cant leave an empty field"<< std::endl;
                this->clean_contact(this->field);
                return 0;
            }
    }
	this->copy_fields();
    this->clean_contact(this->field);
    return (1);
}

std::string& Contact::get_byline()
{
	int i = this->magic;

	if (this->magic == 4)
    {
        this->magic = 0;
        return (this->used_fields[4]);
    }
    this->magic++;
    return (this->used_fields[i]);
}
void	Contact::get_reset()
{
    this->magic = 0;
}
Contact::~Contact()
{
    this->clean_contact(this->used_fields);
}