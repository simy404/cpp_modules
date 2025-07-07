#include "../includes/Fixed.hpp"
#include <iostream>
#include <math.h>

const int Fixed::fractional = 8;

Fixed::Fixed() : _raw(0) {
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	_raw = fixed.getRawBits();
};

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	_raw = value << fractional;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	_raw = roundf(value * (1 << fractional));
}

Fixed&	Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed) {
		this->_raw = fixed.getRawBits();
	}
	return *this;
};

bool	Fixed::operator==(const Fixed &rfp) {
	return  this->getRawBits() == rfp.getRawBits();
}

bool	Fixed::operator!=(const Fixed &rfp) {
	return  this->getRawBits() != rfp.getRawBits();
}

bool	Fixed::operator>=(const Fixed &rfp) {
	return  this->getRawBits() >= rfp.getRawBits();
}

bool	Fixed::operator<=(const Fixed &rfp) {
	return  this->getRawBits() <= rfp.getRawBits();
}

bool	Fixed::operator>(const Fixed &rfp) {
	return  this->getRawBits() > rfp.getRawBits();
}

bool	Fixed::operator<(const Fixed &rfp) {
	return  this->getRawBits() < rfp.getRawBits();
}

Fixed	Fixed::operator+(const Fixed &rfp) {
	Fixed result;
	result.setRawBits(this->getRawBits() + rfp.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(const Fixed &rfp) {
	Fixed result;
	result.setRawBits(this->getRawBits() - rfp.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(const Fixed &rfp) {
	Fixed result;
	result.setRawBits(this->getRawBits() * rfp.getRawBits());
	return (result);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _raw;
};

void	Fixed::setRawBits(int const raw) {
	_raw =  raw;
};

int		Fixed::toInt(void) const
{
	return _raw >> fractional;
}

float	Fixed::toFloat(void) const
{
	return (float)_raw / (1 << fractional);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
};
