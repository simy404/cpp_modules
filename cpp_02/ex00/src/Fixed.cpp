#include "Fixed.hpp"
#include <iostream>

const int Fixed::fractional = 8;

Fixed::Fixed() : _raw(0) {
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	_raw = fixed.getRawBits();
};

Fixed&	Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed) {
		this->_raw = fixed.getRawBits();
	}
	return *this;
};

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _raw;
};

void	Fixed::setRawBits(int const raw) {
	_raw =  raw;
};

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
};
