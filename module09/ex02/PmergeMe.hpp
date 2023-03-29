#pragma once

#include <string>
#include <vector>
#include <list>
#include <iostream>

class PmergeMe
{
public:
	PmergeMe(void);
	PmergeMe(PmergeMe const &src);
	~PmergeMe(void);
	PmergeMe &operator=(PmergeMe const &rhs);
	int parse(int ac, char *argv[]);
	void print_vector();
	void print_vector(std::vector<int> a);
	void start(void);
	std::vector<int> start_algo(std::vector<int> arr);
	std::vector<int> merge(std::vector<int> &left, std::vector<int> &right);
private:
	std::vector<int> vector;
	std::list<int> list;
	unsigned int size;
};

int error(std::string str, int code);