#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("jean", 1);
		std::cout << a << std::endl;
		a.increase(10);
		std::cout << a << std::endl;
		a.decrease(60);
		std::cout << a << std::endl;
	}
	catch(const std::exception &e)
	{
		 std::cerr << e.what() << std::endl;
	}
}
