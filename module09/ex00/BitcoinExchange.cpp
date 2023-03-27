#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {};

BitcoinExchange::BitcoinExchange(BitcoinExchange const &rhs) {
	*this = rhs;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	if (this != &rhs)
	{
		for(std::map<std::string, float>::const_iterator it = rhs.database.begin(); it != rhs.database.end(); it++)
			database[it->first] = it->second;

		for(std::map<std::string, float>::const_iterator itt = rhs.input.begin(); itt != rhs.input.end(); itt++)
			input[itt->first] = itt->second;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {};

int error(std::string str)
{
	std::cout << str << std::endl;
	return (1);
}