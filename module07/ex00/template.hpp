#pragma once
#include <iostream>
#include <string>

template<typename T> 
const T & max( const T & A, const T & B ) 
{ 
	if (A == B)
		return (B);
    return A > B ? A : B; 
}

template<typename T> 
const T & min( const T & A, const T & B ) 
{ 
	if (A == B)
		return (B);
    return A > B ? B : A; 
}

template<typename T> 
void	swap(T &A, T &B ) 
{ 
	T temp = A;
	A = B;
	B = temp;
}
