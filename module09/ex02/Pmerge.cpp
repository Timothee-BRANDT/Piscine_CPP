#include "Pmerge.hpp"

Pmerge::Pmerge() {};

Pmerge::Pmerge(Pmerge const &rhs) {
	*this = rhs;
}

Pmerge &Pmerge::operator=(Pmerge const &rhs) {
	if (this != &rhs)
	{
		vector = rhs.vector;
		list = rhs.list;
	}
	return (*this);
}

int	Pmerge::parse(int ac, char *argv[]) {
	int i = 1;
	while (i < ac)
	{
		vector.push_back(atoi(argv[i]));
		i++;
	}
	size = vector.size();
	std::vector<int>::iterator it;
	for (it = vector.begin(); it != vector.end(); it++) {
		if (*it < 0)
			return (error("Error, input must be positive numbers only", 1));
	}
	return (0);
}

void	Pmerge::print_vector(){
	std::vector<int>::iterator it;
	std::cout << "Before: ";
	for (it = vector.begin(); it != vector.end(); it++) {
		std::cout << (*it) << " ";
	}
	std::cout << "\n";
}

void	Pmerge::print_vector(std::vector<int> a)
{
	std::vector<int>::iterator it;
	for (it = a.begin(); it != a.end(); it++) {
		std::cout << (*it) << " ";
	}
	std::cout << "\n";
}

std::vector<int> Pmerge::first_half(std::vector<int> v1)
{
	std::vector<int>::iterator it = vector.begin();
	unsigned int i = 0;
	while (i < size / 2)
	{
		v1.push_back((*it));
		it++;
		i++;
	}
	return (v1);
}

std::vector<int> Pmerge::second_half(std::vector<int> v2)
{
	std::vector<int>::iterator it = vector.begin();
	unsigned int i = 0;
	while (i < (size / 2))
	{
		it++;
		i++;
	}
	while (i < size)
	{
		v2.push_back(*it);
		it++;
		i++;
	}
	return (v2);
}

std::vector<int> Pmerge::split_vector(std::vector<int> a)
{
	if (size == 1)
		return (a);
	std::vector<int> v1;
	std::vector<int> v2;
	v1 = first_half(v1);
	v2 = second_half(v2);
	print_vector(v1);
	print_vector(v2);
	return (v1);
}

void Pmerge::start()
{
	print_vector();
	split_vector(vector);
}

Pmerge::~Pmerge() {};

int error(std::string str, int code)
{
	std::cout << str << std::endl;
	return (code);
}