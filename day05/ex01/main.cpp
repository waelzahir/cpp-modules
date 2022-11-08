#include "Form.hpp"
#include "Bureaucrat.hpp"


int main()
{
	Bureaucrat ahmed(51, "ahmed");
	// Bureaucrat ahmed(151, "ahmed");

	try
	{
		Bureaucrat ahmed(1, "ahmed");	
		ahmed.gradeDown();
		std::cout << ahmed << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try{
		Form p("batata", 0, 50);
		std::cout << p;
		ahmed.signForm(p);
		std::cout << p;
		}
	catch (std::exception & e)
	{
		std::cout << e.what() <<std::endl;
	}
}

