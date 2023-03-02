#include "iter.hpp"

void print_int(int x)
{
    std::cout << x << std::endl;
}

void print_str(char c)
{
    std::cout << c << std::endl;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
	char str[] = {"Bonsoir"};

    iter(array, 5, print_int);
    std::cout << std::endl;
    iter(str, 7, print_str);
    return 0;
}