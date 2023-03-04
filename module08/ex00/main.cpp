#include "easyfind.hpp"

int main()
{
	std::vector<int> tab;

	tab.push_back(10);
	tab.push_back(150);
	tab.push_back(254);

	int test = easyfind(tab, 150);

	if (test == 1)
		std::cout << "Element found" << std::endl;
	else
		std::cout << "Element not found" << std::endl;

	int test1 = easyfind(tab, 123);

	if (test1 == 1)
		std::cout << "Element found" << std::endl;
	else
		std::cout << "Element not found" << std::endl;
}
