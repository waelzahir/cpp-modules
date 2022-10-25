#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("hamza lm9adam") , grade(150)
{
	std::cout << "Bureaucrat Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(int	grade, std::string name) : name(name)
{
	std::cout << "Bureaucrat assignment Constructor" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs): name(rhs.name)
{
	std::cout << "Bureaucrat copy Constructor" << std::endl;
	(*this) = rhs;
}

Bureaucrat& Bureaucrat::operator = (Bureaucrat const &rhs)
{
	this->grade = rhs.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor" << std::endl;
}

void	Bureaucrat::gradeUp()
{
	if (this->grade > 1)
	{
	this->grade--;
	}
	else
		throw GradeTooHighException();
}

void	Bureaucrat::gradeDown()
{
	if (this->grade < 150)
	{
		this->grade++;
	}
	else
		throw GradeTooLowException();
}
int		Bureaucrat::getGrade() const
{
	return this->grade;
}
const std::string& Bureaucrat::getName() const
{
	return this->name;
}

std::ostream& operator << (std::ostream& out, Bureaucrat const &rhs)
{
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return out;
}

void	Bureaucrat::signForm(Form  &rhs)
{
	try
	{
		rhs.beSigned(*this);
		std::cout << this->name << " signed " << rhs.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << this->name << " coudn't sign " << rhs.getName() << " because " << e.what() << std::endl;
	}
}
