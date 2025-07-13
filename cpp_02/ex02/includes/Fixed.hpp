#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed
{
	int	_raw;
	static const int	fractional;
	
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed(const int value);
		Fixed(const float value);
		
		Fixed&	operator=(const Fixed &fixed);
		
		bool	operator>(const Fixed &fixed) const;
		bool	operator<(const Fixed &fixed) const;
		bool	operator<=(const Fixed &fixed) const;
		bool	operator>=(const Fixed &fixed) const;
		bool	operator==(const Fixed &fixed) const;
		bool	operator!=(const Fixed &fixed) const;

		Fixed	operator+(const Fixed &fixed) const;
		Fixed	operator-(const Fixed &fixed) const;
		Fixed	operator*(const Fixed &fixed) const;
		Fixed	operator/(const Fixed &fixed) const;

		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		static Fixed&	min(Fixed &lfp, Fixed &rfp);
		static const Fixed&	min(const Fixed &lfp, const Fixed &rfp);
		
		static Fixed&	max(Fixed &lfp, Fixed &rfp);
		static const Fixed&	max(const Fixed &lfp, const Fixed &rfp);


		int	getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;
		~Fixed();

};

#endif

