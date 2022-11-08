#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form()
{
	std::cout << "PresidentialPardonForm Constructor" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25 ,5), target(target)
{
	std::cout << "PresidentialPardonForm assignment Constructor" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs) : Form(rhs)
{
	std::cout << "PresidentialPardonForm Copy Constructor" <<std::endl;
	(*this) = rhs;	
}
PresidentialPardonForm	PresidentialPardonForm::operator = (PresidentialPardonForm const &rhs)
{
	this->target = rhs.target;
	return (*this);
}
PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm Destructor" << std::endl;
}
void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSign())
		throw PresidentialPardonEx();
	if (this->getSignExecute() < executor.getGrade())
		throw Form::GradeTooLowException();
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

const	char*	PresidentialPardonForm::PresidentialPardonEx::what() const throw()
{
	return  "ma3andek zher.";
}