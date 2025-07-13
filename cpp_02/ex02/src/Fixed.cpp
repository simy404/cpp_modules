#include "../includes/Fixed.hpp"
#include <iostream>
#include <math.h>

const int Fixed::fractional = 8;

Fixed::Fixed() : _raw(0) {
};

Fixed::Fixed(const Fixed &fixed) {
	_raw = fixed.getRawBits();
};

Fixed::Fixed(const int value)
{
	_raw = value << fractional;
}

Fixed::Fixed(const float value)
{
	_raw = roundf(value * (1 << fractional));
}

Fixed&	Fixed::operator=(const Fixed &fixed) {
	if (this != &fixed) {
		this->_raw = fixed.getRawBits();
	}
	return *this;
};

bool	Fixed::operator==(const Fixed &rfp) const {
	return  this->getRawBits() == rfp.getRawBits();
}

bool	Fixed::operator!=(const Fixed &rfp) const{
	return  this->getRawBits() != rfp.getRawBits();
}

bool	Fixed::operator>=(const Fixed &rfp) const {
	return  this->getRawBits() >= rfp.getRawBits();
}

bool	Fixed::operator<=(const Fixed &rfp) const {
	return  this->getRawBits() <= rfp.getRawBits();
}

bool	Fixed::operator>(const Fixed &rfp) const {
	return  this->getRawBits() > rfp.getRawBits();
}

bool	Fixed::operator<(const Fixed &rfp) const {
	return  this->getRawBits() < rfp.getRawBits();
}

Fixed	Fixed::operator+(const Fixed &rfp) const {
	return (Fixed(this->toFloat() + rfp.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &rfp) const {
	return (Fixed(this->toFloat() - rfp.toFloat()));

}

Fixed	Fixed::operator*(const Fixed &rfp) const {
	return (Fixed(this->toFloat() * rfp.toFloat()));

}

Fixed	Fixed::operator/(const Fixed &rfp) const {
	return (Fixed(this->toFloat() / rfp.toFloat()));

}

Fixed&	Fixed::min(Fixed &lfp, Fixed &rfp)
{
	return lfp < rfp ? lfp : rfp;
}

const Fixed&	Fixed::min(const Fixed &lfp, const Fixed &rfp)
{
	return lfp < rfp ? lfp : rfp;
}

Fixed&	Fixed::max(Fixed &lfp, Fixed &rfp)
{
	return lfp > rfp ? lfp : rfp;
}

const Fixed&	Fixed::max(const Fixed &lfp, const Fixed &rfp)
{
	return lfp > rfp ? lfp : rfp;
}

Fixed&	Fixed::operator++()
{
	this->_raw++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old(*this);
	this->_raw++;
	return (old);
}

Fixed&	Fixed::operator--()
{
	this->_raw--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	old(*this);
	this->_raw--;
	return (old);
}

int	Fixed::getRawBits(void) const {
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
};
