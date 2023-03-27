#include "BitcoinExchange.hpp"

int main(int ac, char *arg[])
{
	if (ac < 2)
		return (error("Not enough parameters, expected 2 -> ./btc filename"));
	else
	{
		BitcoinExchange map;
		std::string filename = arg[1];
		std::ifstream input;
		input.open(filename);
		if (!input)
			return (error("File doesn't exist."));
		input.close();
	}
	return (0);
}