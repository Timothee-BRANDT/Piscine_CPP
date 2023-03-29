#pragma once

#include <string>
#include <vector>
#include <list>
#include <iostream>

class Pmerge {
	public:
		Pmerge(void);
		Pmerge(Pmerge const & src);
		~Pmerge(void);
		Pmerge & operator=(Pmerge const & rhs);
		int		parse(int ac, char *argv[]);
		void	print_vector();
		void	print_vector(std::vector<int> a);
		void	start(void);
		std::vector<int> first_half(std::vector<int> a);
		std::vector<int> second_half(std::vector<int> a);
		std::vector<int> split_vector(std::vector<int> a);
	private:
		std::vector<int> vector;
		std::list<int> list;
		unsigned int size;
};

int error(std::string str, int code);