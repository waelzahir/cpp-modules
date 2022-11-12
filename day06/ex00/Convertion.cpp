#include "Convertion.hpp"

Convertion::Convertion(char	*val)
{
	this->val = val;
	this->input = val;
	if (strlen(val) == 0)
		this->state = -1;
	this->type = this->setType();
	std::cout << this->type << std::endl;
}
Convertion::~Convertion()
{

}
int	Convertion::setType()
{
	int point = 0;
	int f = 0;
	int num = 0;
	if (this->state == -1)
	{
		return (erR);
	}
	if (this->input == "nanf")
		return nanF;
	if (this->input == "nan")
		return naN;
	if (this->input.size() == 1)
	{
		if (isdigit(this->val[0]))
			return intE;
		if (isprint(this->val[0]))
			return charA;
		return no_prinT;
	}
	for (int i = 0; i < (int)strlen(this->val); i++)
	{
		if (isdigit(this->val[i]))
			num++;
		if (this->val[i] == '.')
			point++;
		if (this->val[i] == 'f')
			f++;
	}
	if ((num + point + f) != (int)strlen(this->val))
		return erR;
	if (point > 1 || f > 1)
		return erR;
	if (f == 1)
		return floA;
	if (point == 1)
		return doubL;
	return intE;
}