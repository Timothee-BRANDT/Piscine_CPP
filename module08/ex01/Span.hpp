#pragma once
#include <limits>
#include <iostream>
#include <vector>
#include <algorithm>

class Span {
	public:
		Span();
		Span(unsigned int N);
		Span(Span const & src);
		~Span(void);
		Span & operator=(Span const & rhs);
		void	addNumber(int nb);
		class ContainerFull : public std::exception {
			public :
				const char *what() const throw();
		};
		class ContainerEmpty : public std::exception {
			public :
				const char *what() const throw();
		};
		int	shortestSpan();
		int	longestSpan();
		void	fill(unsigned int n);
		int		get_size(std::vector<int> tab);
	private:
		unsigned int N;
		std::vector<int> tab;
};