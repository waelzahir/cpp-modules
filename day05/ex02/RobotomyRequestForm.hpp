#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string target;
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &rhs);
		RobotomyRequestForm& operator = (RobotomyRequestForm const &rhs);
		~RobotomyRequestForm();
		void	execute(Bureaucrat const & executor) const;
		class RobotomyUnsucsessfull : public std::exception
		{
			public:
				const	char	*what() const throw()
				{
					return  "RobotomyUnsucsessfull";
				}
		};
};
#endif