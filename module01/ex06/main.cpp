#include "Harl.hpp"

int main(int argc, char*argv[])
{
	if (argc == 2)
	{
		Harl	harl;
		string message = argv[1];
		harl.complain(message);
	}
	else
		cout << "Please type only 2 arguments -> Executable and complaining message" << endl;
	return (0);
}
