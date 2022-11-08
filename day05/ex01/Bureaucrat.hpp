#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Form; 

class Bureaucrat
{
	private:
		const std::string  name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(int	grade, std::string name);
		Bureaucrat(Bureaucrat const &rhs);
		Bureaucrat& operator = (Bureaucrat const &rhs);
		~Bureaucrat();
		void	gradeUp();
		void	gradeDown();
		int		getGrade() const;
		const std::string& getName() const;

		class GradeTooHighException : public std::exception
		{
			public:
				const	char*	what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const	char*	what() const throw();
		};
		void	signForm(Form  &rhs);
};

std::ostream& operator << (std::ostream& out, Bureaucrat const &rhs);
#endif