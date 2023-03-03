#include <string>
#include <iostream>
#include <cstdlib>

#define CHAR 11
#define FLOAT 12
#define DOUBLE 13
#define INT	14
#define PSEUDO 15

int	check_type(const char *str)
{
	int dot_flag = 0;
	int f_flag = 0;
	std::string pseudo[6];

	pseudo[0] = "-inff";	
	pseudo[1] = "+inff";	
	pseudo[2] = "-inf";	
	pseudo[3] = "+inf";	
	pseudo[4] = "nanf";	
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
				std::cout << "Please use a correct format : char(c), int(42), float(42.0f), double(42.0) or pseudo litteral" << std::endl;
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

void	handle_pseudo(std::string str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible"	<< std::endl;
	if (str == "-inf")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	if (str == "+inf")
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	if (str == "-inff")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	if (str == "+inff")
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	if (str == "nan")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	if (str == "nanf")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
}

void	handle_char(const char *str)
{
	char c = str[0];
	std::cout << "char: " << str << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void	handle_float(const char *str)
{
    float f = std::atof(str);
    int i = static_cast<int>(f);
    char c = static_cast<char>(i);
    double d = static_cast<double>(f);

	if (i <= 32 || i >= 127)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << std::endl;
    std::cout << "double: " << d << std::endl;
}

void	handle_int(const char *str)
{
	double parse = std::stod(str);
	if (parse > 2147483647 || parse < -2147483648)
	{
		std::cout << "Impossible conversion, int overflowing." << std::endl;
		return;
	}
	int i = std::atoi(str);
	char c = static_cast<char>(i);
	float f = static_cast<float>(i);
	double d = static_cast<double>(i);
	
	if (i <= 32 || i >= 127)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << std::endl;
    std::cout << "double: " << d << std::endl;
}

void	handle_double(const char *str)
{
	double d = std::stod(str);
	int i = static_cast<int>(d);
	char c = static_cast<char>(i);
	float f = static_cast<float>(d);

	if (i <= 32 || i >= 127)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << std::endl;
    std::cout << "double: " << d << std::endl;
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		std::cout << "Bad number of arguments -> ./convert args" << std::endl;
	else
	{
		const char * str = argv[1];
		int	type = check_type(str);
		switch(type) {
			case CHAR:	handle_char(str);
			break;
			case FLOAT: handle_float(str);
			break;
			case DOUBLE: handle_double(str);
			break;
			case INT: handle_int(str);
			break;
			case PSEUDO:	handle_pseudo(str);
			break;
		}
	}
	return (0);
}
