#include <iostream>

void	louder(char *str)
{
	std::string loud(str);
	for(size_t i = 0; i < loud.size(); i++)
	{
		std::cout << (char) (toupper(loud[i]));
	}
}
int main(int ac, char	**av)
{
	if (ac == 1)
		{
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
			return (1);
		}
	for	(int i = 1; i < ac ; i++)
	{
		louder(av[i]);
		if (i != ac - 1)
			std::cout << " ";
	}
	std::cout << "\n";
}