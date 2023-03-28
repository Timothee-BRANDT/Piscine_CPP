#include "BitcoinExchange.hpp"

int main(int ac, char *arg[])
{
	if (ac < 2)
		return (error("Not enough parameters, expected 2 -> ./btc filename", 1));
	else
	{
		BitcoinExchange map;
		std::string filename = arg[1];
		std::ifstream input;
		input.open(filename);
		if (!input)
			return (error("File doesn't exist.", 1));
		map.get_database();
		map.start(filename);
		input.close();
	}
	return (0);
}