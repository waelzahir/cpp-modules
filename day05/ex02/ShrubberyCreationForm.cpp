#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form()
{
	std::cout << "ShrubberyCreationForm Constructor" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target)
{
	std::cout << "ShrubberyCreationForm assignment Constructor" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs): Form(rhs) 
{
	std::cout << "ShrubberyCreationForm Copy Constructor" <<std::endl;
	(*this) = rhs;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator = (ShrubberyCreationForm const &rhs)
{
	this->target = rhs.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSign())
		throw DocumentNotSigned();
	if (this->getSignExecute() < executor.getGrade())
		throw Form::GradeTooLowException();
	std::string filename(this->target + "_shrubbery");
	std::ofstream file;
	file.open(filename);
	if (!file.is_open())
		{
			std::cout << "coudn't create shruberry file " <<std::endl;
			return ;
		}
	file << "       ###\n      #o###\n    #####o###\n   #o##/|#/###\n    ###/|/#o#\n     # }|{  #\n       }|{" << std::endl;
	file.close(); 
}

const	char*	ShrubberyCreationForm::DocumentNotSigned::what() const throw()
{
	return  "Document Not Signed";
}