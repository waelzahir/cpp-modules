#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat root(1, "ouail");
		Bureaucrat user(150, "abass k7el ras");
		Bureaucrat guarden_m(137, "jardini");
		Bureaucrat guarden_s(145, "khdam 3and jardini");
		ShrubberyCreationForm	chajra("jarda");
		std::cout << chajra << "\n\n";
		chajra.beSigned(guarden_s);
		std::cout << chajra << "\n\n";
		chajra.execute(guarden_m);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

}

