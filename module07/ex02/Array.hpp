#pragma once
#include <iostream>

template<class T>
class Array {
	private:
		T *tab;
		unsigned int	size;
	public:
		Array() : tab(nullptr), size(0) {};

		Array(unsigned int n) {
			size = n;
			tab = new T[size];
			for (unsigned int i = 0; i < size; i++)
				tab[i] = 126;
		}

		Array(Array const &src) : tab(new T[src.size]), size(src.size) {
			for (unsigned int i = 0; i < size; i++) {
				tab[i] = src.tab[i];
			}
		}
		~Array() {delete[] tab;};

		unsigned int get_size() {return size;}

		Array &operator=(Array const & rhs) {
			if (this != &rhs)
			{
				T *new_tab = new T[rhs.size];
				for (unsigned int i = 0; i < rhs.size; i++)
					new_tab[i] = rhs.tab[i];
				delete [] tab;
				tab = new_tab;
				size = rhs.size;
			}
			return (*this);
		}
		T &operator[](size_t i) {
			if (i >= size)
				throw std::out_of_range("Index is out of range.");
			return (tab[i]);
		}
};