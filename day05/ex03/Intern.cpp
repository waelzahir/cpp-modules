#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern Constructor" << std::endl;
}
Intern::Intern(Intern const &rhs)
{
	std::cout << "Intern Copy Constructor" << std::endl;
	(*this) = rhs;
}
Intern& Intern::operator = (Intern const &rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}
Form* Intern::makeForm(std::string name, std::string target)
{
	int i = 0;
	Form	*form = NULL;
	std::string str[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	for (i = 0 ; i < 4; i++)
		{
			if (str[i] == name)
				break ;
		}
	switch (i)
	{
		case 0:
			form = new (std::nothrow) PresidentialPardonForm(target);
			break ;
		case 1:
			form = new (std::nothrow) RobotomyRequestForm(target);
			break ;
		case 2:
			form = new (std::nothrow) ShrubberyCreationForm(target);
			break ;
		default:
			std::cout << "Form doesn't exist" << std::endl;
	}
	if (form)
		std::cout << "Intern creates " << name << std::endl;
	return (form);
}
Intern::~Intern()
{
	std::cout << "Intern Destructor" << std::endl;
}