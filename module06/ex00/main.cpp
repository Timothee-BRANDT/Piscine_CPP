#include <string>
#include <iostream>
#include <limits>

#define PSEUDO 10
#define CHAR 11
#define FLOAT 12
#define DOUBLE 13
#define INT	14

int	check_type(std::string str)
{
	int dot_flag = 0;
	int f_flag = 0;
	std::string pseudo[6];

	pseudo[0] = "-inff";	
	pseudo[1] = "+inff";	
	pseudo[2] = "nanf";	
	pseudo[3] = "-inf";	
	pseudo[4] = "+inf";	
	pseudo[5] = "nan";	

	for (int i = 0; i < 6; i++)
	{
		if (pseudo[i] == str)
			return (PSEUDO);
	}
	for (int i = 0; str[i]; i++)
	{
		if ((str[i] >= 33 && str[i] < 48) || (str[i] >= 58 && str[i] <= 126))
			if ((str[i + 1] >= 33 && str[i + 1]< 48) || (str[i + 1] >= 58 && str[i + 1] <= 126))
			{
				std::cout << "Please use a correct format : char(c), int(42), float(42.2f), double(42.0) or pseudo litteral(nan)" << std::endl;
				return (0);
			}
	}
	if (str[0] && !str[1] && ((str[0] >= 33 && str[0] < 48) || (str[0] >= 58 && str[0] <= 126)))
		return (CHAR);
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == '.')
			dot_flag = 1;
		if (str[i] == 'f')
			f_flag = 1;
	}
	if (f_flag == 1 && dot_flag == 1)
		return (FLOAT);
	if (f_flag == 0 && dot_flag == 1)
		return (DOUBLE);
	return (INT);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		std::cout << "Bad number of arguments -> ./convert args" << std::endl;
	else
	{
		std::string str = argv[1];
		int	type = check_type(str);
		switch(type) {
			case PSEUDO: std::cout << "PSEUDO TYPE" << std::endl;
			break;
			case CHAR: std::cout << "CHAR TYPE" << std::endl;
			break;
			case FLOAT: std::cout << "FLOAT TYPE" << std::endl;
			break;
			case DOUBLE: std::cout << "DOUBLE TYPE" << std::endl;
			break;
			case INT: std::cout << "INT TYPE" << std::endl;
			break;
		}
	}
	return (0);
}