#include <iostream>
#include "../includes/Fixed.hpp"

std::ostream& operator<<(std::ostream &__out, const Fixed &fixed) 
{
	return __out << fixed.toFloat();
}

int main( void ) {
	Fixed a(3.5f);
	Fixed const b(2.5f);
;
	std::cout << (a) << std::endl;

	std::cout << a * b  << std::endl;
	std::cout << (b)  << std::endl;

	return 0;
}
