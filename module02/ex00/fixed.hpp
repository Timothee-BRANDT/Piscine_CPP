#pragma once

#include <iostream>
#include <string>
using namespace std;

class Fixed {
    public:
    	Fixed(void);
    	Fixed(Fixed const & src);
    	~Fixed(void);
		Fixed & operator=(Fixed const & rhs);
		int 	getRawBits(void) const;
		void 	setRawBits(int const raw);
	private:
		int	value;
		static const int fractionnalBits = 8;
};
