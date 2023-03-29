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
	size = vector.size();
	std::vector<int>::iterator it;
	for (it = vector.begin(); it != vector.end(); it++)
	{
		if (*it < 0)
			return (error("Error, input must be positive numbers only", 1));
	}
	return (0);
}

void PmergeMe::print_vector(std::vector<int> a)
{
	std::vector<int>::iterator it;
	for (it = a.begin(); it != a.end(); it++)
	{
		std::cout << (*it) << " ";
	}
	std::cout << "\n";
}

std::vector<int> PmergeMe::merge(std::vector<int> &left, std::vector<int> &right)
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

std::vector<int> PmergeMe::start_algo(std::vector<int> arr)
{
	if (arr.size() <= 1)
		return arr;
	int mid = arr.size() / 2;
	std::vector<int> left(arr.begin(), arr.begin() + mid);
	std::vector<int> right(arr.begin() + mid, arr.end());
	left = start_algo(left);
	right = start_algo(right);
	return merge(left, right);
}

void PmergeMe::start()
{
	std::cout << "Before: ";
	print_vector(vector);
	std::vector<int> result = start_algo(vector);
	std::cout << "After: ";
	print_vector(result);
}

PmergeMe::~PmergeMe(){};

int error(std::string str, int code)
{
	std::cout << str << std::endl;
	return (code);
}