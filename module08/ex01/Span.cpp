#include "Span.hpp"

Span::Span() : N(0) {}

Span::Span(unsigned int N) : N(N) {}

Span::Span(Span const &src) {
	*this = src;
}

Span::~Span() {}

Span &Span::operator=(Span const & rhs) {
	N = rhs.N;
	tab = rhs.tab;
	return (*this);
}

const char *Span::ContainerFull::what() const throw() {
	return ("Container is full");
}

const char *Span::ContainerEmpty::what() const throw() {
	return ("Container length is 1 or less");
}

void	Span::addNumber(int nb) {
	if (tab.size() >= N)
		throw ContainerFull();
	else
		tab.push_back(nb);
}

int Span::shortestSpan() {
	if (tab.size() <= 1)
		throw ContainerEmpty();

	std::sort(tab.begin(), tab.end());

	int	result = INT_MAX;
	for (unsigned int i = 1; i < tab.size(); i++) {
		int distance = tab[i] - tab[i - 1];
		if (distance < result)
			result = distance;
	}
	return result;
}

int Span::longestSpan() {
	if (tab.size() <= 1)
		throw ContainerEmpty();

	int max, min;

	min = *std::min_element(tab.begin(), tab.end());
	max = *std::max_element(tab.begin(), tab.end());

	return (max - min);
}

int	Span::get_size(std::vector<int> tab)
{
	return tab.size();
}

void	Span::fill(unsigned int n)
{
	if (this->N < ((get_size(tab) + n)))
		throw ContainerFull();
	else
	{
	 	for (unsigned int i = 0; i < n; i++) {
			addNumber(i);
		}
	}
}
