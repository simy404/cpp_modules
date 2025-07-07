#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed
{
	int	_raw;
	static const int	fractional; // make it 8
	
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed(const int value);
		Fixed(const float value);
		
		Fixed&	operator=(const Fixed &fixed);
		
		bool	operator>(const Fixed &fixed);
		bool	operator<(const Fixed &fixed);
		bool	operator<=(const Fixed &fixed);
		bool	operator>=(const Fixed &fixed);
		bool	operator==(const Fixed &fixed);
		bool	operator!=(const Fixed &fixed);

		Fixed	operator+(const Fixed &fixed);
		Fixed	operator-(const Fixed &fixed);
		Fixed	operator*(const Fixed &fixed);
		Fixed	operator/(const Fixed &fixed);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;
		~Fixed();

};

#endif

