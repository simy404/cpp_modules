#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed
{
	int	_raw;
	static const int	fractional; // make it 8

	public:
		Fixed();
		Fixed(Fixed &fixed);
		Fixed&	operator=(const Fixed &fixed);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		~Fixed();

};

#endif

