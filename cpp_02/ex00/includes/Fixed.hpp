#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed
{
	int	_raw;
	static const int	fractional;

	public:
		Fixed();
		Fixed(const Fixed &fixed);


		Fixed&	operator=(const Fixed &fixed);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		~Fixed();

};

#endif

