#include "PmergeMe.hpp"

int main(int ac, char *argv[])
{
	if (ac < 2)
		return (error("Need at least 2 parameters.", 1));
	PmergeMe merge;
	if (merge.parse(ac, argv))
		return (1);
	clock_t vector_start = clock();
	merge.start_vector();
	clock_t vector_end = clock();
	double vector_time = double(vector_end - vector_start) / CLOCKS_PER_SEC;
	std::cout << "Vector Runtime -> " << std::fixed << vector_time << " sec " << std::endl;
	clock_t list_start = clock();
	merge.start_list();
	clock_t list_end = clock();
	double list_time = double(list_end - list_start) / CLOCKS_PER_SEC;
	std::cout << "List Runtime -> " << std::fixed << list_time << " sec " << std::endl;
	return (0);
}