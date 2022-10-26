#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"



int main()
{
	try
	{
		Bureaucrat root(1, "ouail");
		Bureaucrat user(150, "abass k7el ras");
		Bureaucrat guarden_m(137, "jardini");
		Bureaucrat guarden_s(145, "khdam 3and jardini");
		ShrubberyCreationForm	chajra("das");
		std::cout << chajra << "\n\n";
		chajra.beSigned(guarden_s);
		std::cout << chajra << "\n\n";
		chajra.execute(guarden_m);
		PresidentialPardonForm l3fo("ouail");
		std::cout << l3fo << std::endl;
		l3fo.beSigned(root);
		std::cout << l3fo << std::endl ;
		l3fo.execute(root);
		RobotomyRequestForm hh("3afak");
		hh.beSigned(root);
		hh.execute(root);
		std::cout << hh << std::endl;
		root.executeForm(hh);
		Intern pl;
		Form *form = pl.makeForm("PresidentialPardonForm", "3azwa");
		if (form)
			std::cout << *form << std::endl;
		(*form).beSigned(root);
		(*form).execute(root);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

}

