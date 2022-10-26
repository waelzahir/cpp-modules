#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &rhs);
		Intern& operator = (Intern const &rhs);
		Form	*makeForm(std::string name, std::string target);
		~Intern();
};
#endif