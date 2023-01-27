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
		Fixed & operator=(Fixed const & rhs);
		int 	getRawBits(void) const;
		void 	setRawBits(int const raw);
		float 	toFloat(void) const;
		int 	toInt(void) const;
	private:
		int	value;
		static const int fractionnalBits = 8;
};

std::ostream &operator<<(std::ostream & o, Fixed const & rhs);