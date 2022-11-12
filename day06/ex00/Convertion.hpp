#ifndef	CONVERTION_HPP
#define CONVERTION_HPP
#include <iostream>
#include <cmath>

typedef enum s_type
{
	erR,
	charA,
	intE,
	floA,
	doubL,
	impossiblE,
	no_prinT,
	naN,
	nanF,
} t_type;

class Convertion
{
	private:
		char	*val;
		std::string input;
		int type;
		int state;
	public:
		Convertion(char	*val);
		~Convertion();
		int	setType();
};
#endif