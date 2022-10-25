#include "Fixed.hpp"

const int Fixed::fraction  = 8;

Fixed::Fixed() : value(0) { }

Fixed::Fixed(const int i)
{
	int a = i;
	this->value = (int)(a * 256);
}

Fixed::Fixed(const float f)
{
	float	fl = f;
	this->value = roundf(fl * 256);
}

Fixed::Fixed(Fixed const &rhs) { *this = rhs; }

Fixed&	Fixed::operator = (Fixed const &rhs)  { this->value = rhs.getRawBits(); return (*this); }

Fixed::~Fixed(){}

int	Fixed::getRawBits( void ) const { return this->value; }

void	Fixed::setRawBits(int const raw) { this->value = raw; }

float	Fixed::toFloat(void) const
{
	float	f;

	f = (float)this->value;
	return f / 256;
}

int		Fixed::toInt(void) const { return (this->value / 256); }

std::ostream& operator << (std::ostream &out, const Fixed &rhs) { out << rhs.toFloat(); return out; }

Fixed	Fixed::operator ++() { this->value++; return (*this); }

Fixed	Fixed::operator ++(int)
{
	Fixed tmp(*this);
	++(this->value);
	return (tmp);
}

Fixed	Fixed::operator --() { this->value++; return (*this); }

Fixed	Fixed::operator --(int)
{
	Fixed tmp(*this);
	--(this->value);
	return (tmp);
}
bool Fixed::operator != (const	Fixed& rhs) { return (this->toFloat() != rhs.toFloat()); }

bool Fixed::operator == (const	Fixed& rhs) { return (this->toFloat() == rhs.toFloat()); }

bool Fixed::operator <= (const	Fixed& rhs) { return (this->toFloat() <= rhs.toFloat()); }

bool Fixed::operator >= (const	Fixed& rhs) { return (this->toFloat() >= rhs.toFloat()); }

bool Fixed::operator <  (const	Fixed& rhs) { return (this->toFloat() < rhs.toFloat()); }

bool Fixed::operator >  (const	Fixed& rhs) { return (this->toFloat() > rhs.toFloat()); }

Fixed	Fixed::operator -(const Fixed& rhs) { return (Fixed(this->toFloat() - rhs.toFloat())); }

Fixed	Fixed::operator /(const Fixed& rhs) { return (Fixed(this->toFloat() / rhs.toFloat())); }

Fixed	Fixed::operator *(const Fixed& rhs) { return(Fixed(this->toFloat() * rhs.toFloat())); }

Fixed	Fixed::operator +(const Fixed& rhs) { return (Fixed(this->toFloat() + rhs.toFloat())); }

Fixed& Fixed::max(Fixed &first, Fixed &second)
{
	if (first >= second)
		return first;
	return (second); 
}

Fixed& Fixed::max(	Fixed const &first, Fixed const &second)
{
	if (const_cast<Fixed&>(first) >= const_cast<Fixed&>(second))
		return const_cast<Fixed&>(first);
	return (const_cast<Fixed&>(second)); 
}
Fixed& Fixed::min(Fixed &first, Fixed &second)
{
	if (first <= second)
		return first;
	return (second); 
}
Fixed& Fixed::min(Fixed const &first,  Fixed const &second)
{
	if (const_cast<Fixed&>(first) <= const_cast<Fixed&>(second))
		return const_cast<Fixed&> (first);
	return (const_cast<Fixed&>(second)); 
}