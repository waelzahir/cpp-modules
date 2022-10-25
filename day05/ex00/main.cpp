#include "Bureaucrat.hpp"


int main()
{
	// Bureaucrat ahmed(0, "ahmed");
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
}