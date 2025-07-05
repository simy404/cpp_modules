#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : fixed_number(0) {
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	fixed_number = fixed.getRawBits();
};

Fixed&	Fixed::operator=(Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed) {
		this->fixed_number = fixed.getRawBits();
	}
	return *this;
};

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return fixed_number;
};

void	Fixed::setRawBits(int const raw) {
	fixed_number =  raw;
};

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
};
