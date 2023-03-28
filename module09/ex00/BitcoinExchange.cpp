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
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {};

int parsing(std::string date, float value)
{
	int year, month, day;
	sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);
	if (year > 2023)
		return (parse_error("Error: bad input -> ", date, 1));
	if (month < 1 || month > 12)
		return (parse_error("Error: bad input -> ", date, 1));
	if (day < 1 || day > 31)
		return (parse_error("Error: bad input -> ", date, 1));
	if (value > 1000)
		return (error("Error: too large number", 1));
	if (value < 0)
		return (error("Error: not a positive number", 1));
	return (0);
}

int	BitcoinExchange::get_database()	
{
	std::ifstream file("data.csv");
    std::string line;

	if (!file)
		return (error("Database file is missing", 1));
	std::getline(file, line);
	while (std::getline(file, line)) {
		std::string date = line.substr(0, line.find(','));
		std::string rate = line.substr(line.find(',') + 1);
		float value = std::stof(rate);
		database[date] = value;
    }
	return (0);
}

int BitcoinExchange::start(std::string file)
{
	std::ifstream filestream(file);
	std::string line;
	if (!filestream)
		return (error("The file you provide doesn't exist", 1));
	std::getline(filestream, line);
	while (std::getline(filestream, line))
	{
		int flag = 0;
		std::string date = line.substr(0, line.find('|') - 1);
		std::string rate = line.substr(line.find('|') + 2);
		std::map<std::string, float>::iterator it = database.lower_bound(date);
		float value = std::stof(rate);
		if(parsing(date, value))
			continue;
		else
		{
			std::map<std::string, float>::iterator i;
			for (i = database.begin(); i != database.end(); i++)
			{
				if (date == i->first)
				{
					float f = value * i->second;
					std::cout << date << " => " << value << " = " << f << std::endl;
					flag = 1;
					break;
				}
			}
			if (it == database.begin()) // the closest date is the first one
			{
				float _f = value * it->second;
				std::cout << date << " => " << value << " = " << _f << std::endl;
			}
			else if (!flag)
			{
				it--; // decrese iterator to get the lower date
				float _f = value * it->second;
				std::cout << date << " => " << value << " = " << _f << std::endl;
			}
		}
	}
	return (0);
}

int error(std::string str, int code)
{
	std::cout << str << std::endl;
	return (code);
}

int parse_error(std::string comment, std::string str, int code)
{
	std::cout << comment;
	std::cout << str << std::endl;
	return (code);
}