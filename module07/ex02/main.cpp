#include "Array.hpp"

int main()
{
	try
	{
		Array<char> a(5);
		for (unsigned int i = 0; i < a.get_size(); i++) {
			std::cout << "a[i] = " << a[i] << std::endl;
		}
		std::cout << "\n";
		Array<char> b(a); // Copy constructor
		for (unsigned int i = 0; i < a.get_size(); i++) {
			std::cout << "b[i] = " << b[i] << std::endl;
		}
		std::cout << "\n";
		Array<char> c;
		c = b;
		for (unsigned int i = 0; i < a.get_size() + 10; i++) { // throw exception because size + 10 is out of range
			std::cout << "c[i] = " << c[i] << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}