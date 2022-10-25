#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form()
{
	std::cout << "RobotomyRequestForm Constructor" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), target(target)
{
	std::cout << "RobotomyRequestForm assignment Constructor" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs) : Form(rhs) 
{
	std::cout << "RobotomyRequestForm Copy Constructor" <<std::endl;
	(*this) = rhs;
}
RobotomyRequestForm& RobotomyRequestForm::operator = (RobotomyRequestForm const &rhs)
{
	this->target = rhs.target;
	return (*this);
}
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor" << std::endl;
}
void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSign())
		throw RobotomyUnsucsessfull();
	if (this->getSignExecute() < executor.getGrade())
		throw GradeTooLowException();
	std::cout << "*drilling noises*" << "/n" << this->target << " has been robotomized" << std::endl;
}