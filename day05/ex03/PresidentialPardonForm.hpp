#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string target;
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string name);
		PresidentialPardonForm(PresidentialPardonForm const &rhs);
		PresidentialPardonForm	operator = (PresidentialPardonForm const &rhs);
		~PresidentialPardonForm(void);
		void	execute(Bureaucrat const & executor) const;
		class PresidentialPardonEx : public std::exception
		{
			public:
				const	char	*what() const throw();
		};
};

#endif