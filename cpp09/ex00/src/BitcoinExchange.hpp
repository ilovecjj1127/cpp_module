#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
#include <fstream>
#include <map>
#include <ctime>
#include <cmath>

#define RED "\033[91m"
#define GREEN "\033[92m"
#define PINK "\033[95m"
#define RESET "\033[0m"

class BitcoinExchange {
private:
	std::map<std::string, float> _rate_map;

	void _parseData();
	bool _isValidDate( const std::string& date );
	float _getRate( const std::string& value );

public:
	BitcoinExchange();
	BitcoinExchange( const BitcoinExchange& other );
	~BitcoinExchange();

	BitcoinExchange& operator = ( const BitcoinExchange& other );

	void processInput( const std::string& input_file );

	class FileNotOpenException: public std::exception {
		public: virtual const char *what() const throw();
	};

	class WrongFormatException: public std::exception {
		public: virtual const char *what() const throw();
	};
};