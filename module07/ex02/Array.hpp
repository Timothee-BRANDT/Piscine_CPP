#pragma once
#include <iostream>

// template<typename T> class Array;

// template<typename T>
// std::ostream &operator<<(std::ostream &a, Array<T> const &);

template<class T>
class Array {
	public:
		Array();
		// Array(Array const &src);
		~Array(void);
		// Array & operator=(Array const & rhs);
	private:
		T *tab;
		int	size;
};