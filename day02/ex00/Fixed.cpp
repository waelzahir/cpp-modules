#include "Fixed.hpp"

const int Fixed::fraction  = 8;

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &rhs)
{
	std::cout << "copy constructor called" << std::endl;
	*this = rhs;
}

Fixed   &Fixed::operator = (Fixed const &rhs) 
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
	this->value = raw;
}

