#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

class BitcoinExchange
{
	public:
	BitcoinExchange();
	BitcoinExchange(BitcoinExchange const &rhs);
	BitcoinExchange &operator=(BitcoinExchange const &rhs);
	~BitcoinExchange();
	int	get_database();
	int get_input_file(std::string file);

	private:
	std::map<std::string, float> database;
	std::map<std::string, float> input;
};

int error(std::string str, int code);
int parse_error(std::string comment, std::string str, int code);
int parsing(std::string date, float value);