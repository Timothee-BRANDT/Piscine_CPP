#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){};

PmergeMe::PmergeMe(PmergeMe const &rhs)
{
	*this = rhs;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &rhs)
{
	if (this != &rhs)
	{
		vector = rhs.vector;
		list = rhs.list;
	}
	return (*this);
}

int PmergeMe::parse(int ac, char *argv[])
{
	int i = 1;
	while (i < ac)
	{
		vector.push_back(atoi(argv[i]));
		i++;
	}
	i = 1;
	while (i < ac)
	{
		list.push_back(atoi(argv[i]));
		i++;
	}
	std::vector<int>::iterator it;
	for (it = vector.begin(); it != vector.end(); it++)
	{
		if (*it < 0)
			return (error("Error, input must be positive numbers only", 1));
	}
	for (unsigned int i = 0; i < vector.size(); i++)
		for(unsigned int j = i + 1; j < vector.size(); j++)
			if (vector[i] == vector[j])
				return (error("Double number.", 1));
	return (0);
}

void PmergeMe::print_vector(std::vector<int> a)
{
	std::vector<int>::iterator it;
	for (it = a.begin(); it != a.end(); it++)
		std::cout << (*it) << " ";
	std::cout << "\n";
}

void PmergeMe::print_list(std::list<int> a)
{
	std::list<int>::iterator it;
	for (it = a.begin(); it != a.end(); it++)
		std::cout << (*it) << " ";
	std::cout << "\n";
}

std::vector<int> PmergeMe::vector_merge(std::vector<int> &left, std::vector<int> &right)
{
	std::vector<int> result;
	unsigned int i = 0, j = 0;
	while (i < left.size() && j < right.size())
	{
		if (left[i] < right[j])
		{
			result.push_back(left[i]);
			i++;
		}
		else
		{
			result.push_back(right[j]);
			j++;
		}
	}
	while (i < left.size())
	{
		result.push_back(left[i]);
		i++;
	}
	while (j < right.size())
	{
		result.push_back(right[j]);
		j++;
	}
	return result;
}

std::vector<int> PmergeMe::vector_algo(std::vector<int> arr)
{
	if (arr.size() <= 1)
		return arr;
	int mid = arr.size() / 2;
	std::vector<int> left(arr.begin(), arr.begin() + mid);
	std::vector<int> right(arr.begin() + mid, arr.end());
	left = vector_algo(left);
	right = vector_algo(right);
	return vector_merge(left, right);
}

std::list<int> PmergeMe::list_merge(std::list<int> &left, std::list<int> &right)
{
	std::list<int>::iterator it1 = left.begin();
	std::list<int>::iterator it2 = right.begin();
	std::list<int> result;

	while (it1 != left.end() && it2 != right.end())
	{
		if (*it1 <= *it2)
		{
			result.push_back(*it1);
			it1++;
		}
		else
		{
			result.push_back(*it2);
			it2++;
		}
	}
	while (it1 != left.end())
	{
		result.push_back(*it1);
		it1++;
	}
	while (it2 != right.end())
	{
		result.push_back(*it2);
		it2++;
	}
	return result;
}

std::list<int> PmergeMe::list_algo(std::list<int> lst)
{
	if (lst.size() <= 1)
		return lst;
	int mid = lst.size() / 2;
	std::list<int> left;
	std::list<int> right;
	std::list<int>::iterator it = lst.begin();
	for (int i = 0; i < mid; i++)
	{
		left.push_back(*it);
		it++;
	}
	while (it != lst.end())
	{
		right.push_back(*it);
		it++;
	}
	left = list_algo(left);
	right = list_algo(right);
	return list_merge(left, right);
}

void PmergeMe::start_vector()
{
	std::cout << "Before: ";
	print_vector(vector);
	std::vector<int> result = vector_algo(vector);
	std::cout << "After: ";
	print_vector(result);
}

void PmergeMe::start_list()
{
	std::list<int> result =	list_algo(list);
}

PmergeMe::~PmergeMe(){};

int error(std::string str, int code)
{
	std::cout << str << std::endl;
	return (code);
}