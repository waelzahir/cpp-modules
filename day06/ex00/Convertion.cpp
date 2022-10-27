#include "Convertion.hpp"

Convertion::Convertion(void)
{
	this->e = 0;
	std::cout << "Convertion Constructor" << std::endl;
}
Convertion::Convertion(char	*val, int	ac)
{
	this->e = 0;
	this->checkInput(val, ac);
	std::cout << "Convertion assignment Constructor" << std::endl;
}
Convertion::Convertion(Convertion const &rhs)
{
	std::cout << "Convertion Copy Constructor" << std::endl;
	(*this) = rhs;
}
Convertion& Convertion::operator = (Convertion const &rhs)
{
	this->input = rhs.input;
}
Convertion::~Convertion()
{
	std::cout << "Convertion Destructor" << std::endl;
}
void	Convertion::checkInput(char	*val, int ac)
{
	if (ac != 2)
		throw InvalidAgrs();
	if (val[0] == '\0')
		throw InvalidInput();
}