#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : name("white paper"), sign(0) ,b_sign(150), b_execute(150) 
{
	std::cout << "Form Constructor" << std::endl;
}
Form::Form(std::string name, int sign, int execute): name(name), sign(0) , b_sign(sign), b_execute(execute) 
{
	std::cout << "Form assignment Constructor" <<std::endl;
	if (sign < 1 || execute < 1)
		throw GradeTooHighException();
	if (sign > 150 || execute > 150)
		throw GradeTooLowException();
}
Form::Form(Form	const &rhs) : name(rhs.name), b_sign(rhs.b_sign), b_execute(rhs.b_execute) 
{
	std::cout << "Form Copy Constructor" <<std::endl;
	(*this) = rhs;
}
Form& Form::operator = (Form	const &rhs)
{
	this->sign = rhs.sign;
	return (*this);
}
Form::~Form()
{
	std::cout << "Form destructor" << std::endl;
}

int Form::getSignGrade() const
{
	return this->b_sign;
}
int Form::getSignExecute() const
{
	return this->b_execute;
}
bool Form::getSign() const
{
	return (this->sign);
}
const std::string& Form::getName() const
{
	return this->name;
}
std::ostream& operator << (std::ostream &out, Form const &rhs)
{
	out << "---------Form---------\n";
	out << "name: " << rhs.getName() << "\n";
	if (rhs.getSign())
		out << "signed: Yes\n";
	else
		out << "signed: No\n";
	out << "grade to sign: " << rhs.getSignGrade() << "\n";
	out << "grade to execute: " << rhs.getSignExecute() <<"\n";
	out << "---------Form---------" << std::endl;
	return (out);
}

void	Form::beSigned(Bureaucrat const &rhs) 
{
	if (rhs.getGrade() > this->b_sign)
		throw GradeTooLowException();
	this->sign = true;
}
