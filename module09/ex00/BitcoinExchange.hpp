#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <map>

class BitcoinExchange
{
	public:
	BitcoinExchange();
	BitcoinExchange(BitcoinExchange const &rhs);
	BitcoinExchange &operator=(BitcoinExchange const &rhs);
	~BitcoinExchange();

	private:
	std::map<std::string, float> database;
	std::map<std::string, float> input;
};

int error(std::string str);