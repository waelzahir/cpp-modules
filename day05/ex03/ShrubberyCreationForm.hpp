#ifndef	SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"


class ShrubberyCreationForm : public Form
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &rhs);
		ShrubberyCreationForm& operator = (ShrubberyCreationForm const &rhs);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor) const;
		class DocumentNotSigned : public std::exception
		{
			public:
				const	char	*what() const throw();
		};
};

#endif