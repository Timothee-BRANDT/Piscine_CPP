#pragma once

#include <iostream>
#include <string>
#include <math.h>

class Fixed {
    public:
    	Fixed(void);
    	Fixed(Fixed const & src);
		Fixed(const int);
		Fixed(const float);
    	~Fixed(void);
		int		operator<(Fixed const & rhs) const;
		bool	operator<=(Fixed const & rhs);
		int 	operator>(Fixed const & rhs) const;
		bool	operator>=(Fixed const & rhs);
		bool	operator!=(Fixed const & rhs);
		bool	operator==(Fixed const & rhs);
		Fixed	&operator=(Fixed const & rhs);
		Fixed	&operator+(Fixed const & rhs);
		Fixed	&operator-(Fixed const & rhs);
		Fixed	&operator*(Fixed const & rhs);
		Fixed	&operator/(Fixed const & rhs);
		Fixed 	operator++(int);
		Fixed 	&operator++(void);
		Fixed 	operator--(int);
		Fixed 	&operator--(void);
		static	Fixed	&min(Fixed &a, Fixed &b);
		static	Fixed const	&min(Fixed const &a, Fixed const &b);
		static	Fixed	&max(Fixed &a, Fixed &b);
		static	Fixed const	&max(Fixed const &a, Fixed const &b);
		int 	getRawBits(void) const;
		void 	setRawBits(int const raw);
		float 	toFloat(void) const;
		int 	toInt(void) const;
	private:
		int	value;
		static const int fractionnalBits = 8;
};

std::ostream &operator<<(std::ostream & o, Fixed const & rhs);