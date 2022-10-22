#include "Fixed.hpp"

const int Fixed::fraction  = 8;

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	int a = i;
	this->value = (int)(a * 256);
	std::cout << "int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	float	fl = f;
	this->value = roundf(fl * 256);
	std::cout << "float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &rhs)
{
	std::cout << "copy constructor called" << std::endl;
	*this = rhs;
}

Fixed  &Fixed::operator = (Fixed const &rhs) 
{
	std::cout << "copy assignment operator called." << std::endl;
	this->value = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;	
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	float	f;

	f = (float)this->value;
	return f / 256;
}

int		Fixed::toInt(void) const 
{
	return (this->value / 256);
}

std::ostream& operator << (std::ostream &out, const Fixed &rhs)
{
	out << rhs.toFloat();
	return out;
}

