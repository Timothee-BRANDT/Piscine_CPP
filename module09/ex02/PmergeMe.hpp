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
	void print_vector(std::vector<int> a);
	void print_list(std::list<int> a);
	void start_vector(void);
	void start_list(void);
	std::vector<int>	vector_algo(std::vector<int> arr);
	std::vector<int>	vector_merge(std::vector<int> &left, std::vector<int> &right);
	std::list<int>	list_algo(std::list<int> arr);
	std::list<int>	list_merge(std::list<int> &left, std::list<int> &right);
	double measureTime(void (*func)(std::vector<int>), std::vector<int> arg);
private:
	std::vector<int> vector;
	std::list<int> list;
};

int error(std::string str, int code);