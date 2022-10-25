#ifndef	FORM_HPP
#define FORM_HPP
#include <iostream>
class Bureaucrat;

class Form
{
	private:
		const	std::string name;
		bool 	sign;
		const	int b_sign;
		const	int b_execute;
	public:
		Form(void);
		Form(std::string name, int sign, int execute);
		Form(Form	const &rhs);
		Form& operator = (Form	const &rhs);
		~Form();
		class GradeTooHighException : public std::exception
		{
			public:
				const	char	*what() const throw()
				{
					return "grade too high";
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const	char	*what() const throw()
				{
					return  "grade too low";
				}
		};
		int getSignGrade() const;
		int getSignExecute() const;
		bool getSign() const;
		const std::string &getName() const;
		void	beSigned(Bureaucrat const &rhs) ;
};

std::ostream& operator << (std::ostream &out, Form const &rhs);
#endif