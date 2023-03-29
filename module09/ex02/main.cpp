#include "PmergeMe.hpp"

int main(int ac, char *argv[])
{
	if (ac < 2)
		return (error("Need at least 2 parameters.", 1));
	PmergeMe merge;
	if (merge.parse(ac, argv))
		return (1);
	merge.start();
	return (0);
}