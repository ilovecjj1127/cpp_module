#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	_parseData();
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange( const BitcoinExchange& other ) {
	*this = other;
}

BitcoinExchange& BitcoinExchange::operator = ( const BitcoinExchange& other ) {
	if (this != &other) {
		this->_rate_map = other._rate_map;
	}
	return (*this);
}

// check format(basic) and check validity(strict)
bool BitcoinExchange::_isValidDate( const std::string& date ) {
	std::string date_trim = date.substr(0, date.find_first_of(" "));
	struct tm tm = {};
	if (strptime(date_trim.c_str(), "%Y-%m-%d", &tm) == NULL) {
		std::cerr << RED "Error: invalid date => " << date << RESET << std::endl;
		return false;
	}
	int day = tm.tm_mday;
	time_t rawTime = mktime(&tm);
	if (rawTime == -1 || tm.tm_mday != day) {
		std::cerr << RED "Error: invalid date => " << date << RESET << std::endl;
		return false;
	}
	return true;
}

// std::map automatically sorted by the key by default
void BitcoinExchange::_parseData() {
	std::ifstream data("data.csv");
	if (!data.is_open()) {
		throw FileNotOpenException();
	}
	std::string line;
	std::string date, value;
	float rate;
	std::getline(data, line);
	if (line != "date,exchange_rate") {
		throw WrongFormatException();
	}
	while (std::getline(data, line)) {
		size_t delimiter = line.find(",");
		date = line.substr(0, delimiter);
		value = line.substr(delimiter + 1);
		if (!_isValidDate(date)) {
			continue;
		}
		try {
			rate = std::stof(value);
			if (rate < 0) {
				throw std::invalid_argument("");
			}
			_rate_map[date] = rate;
		} catch (...) {
			std::cerr << "Invalid value format: " << line << std::endl;
		}
	}
}

float BitcoinExchange::_getRate( const std::string& date ) {
	auto it = _rate_map.lower_bound(date);
	if (it == _rate_map.begin() && it->first > date) {
		std::cerr << RED "Error: Rate not found => " << date << RESET;
		throw std::invalid_argument("");
	}
	if (it == _rate_map.end() || (it != _rate_map.begin() && it->first > date)) {
		--it;
	}
	if (it != _rate_map.end() && it->first <= date) {
		return it->second;
	}
	return 0;
}

void BitcoinExchange::processInput( const std::string& input_file ) {
	std::ifstream input(input_file);
	if (!input.is_open()) {
		throw FileNotOpenException();
	}

	std::string line, date, value;
	float valuef, result;
	std::getline(input, line);
	if (line != "date | value") {
		throw WrongFormatException();
	}
	while (std::getline(input, line)) {
		size_t delimiter = line.find(" | ");
		if (delimiter == std::string::npos) {
			std::cerr << RED "Error: invalid format => " << line << RESET << std::endl;
			continue;
		}
		date = line.substr(0, line.find_first_of(" "));
		value = line.substr(line.find_last_of(" ") + 1);
		if (!_isValidDate(date)) {
			continue;
		}
		try {
			valuef = std::stof(value);
			if (valuef < 0) {
				std::cerr << RED "Error: not a positive number." RESET << std::endl;
				continue;
			} else if (valuef > 1000) {
				std::cerr << RED "Error: too large a number." RESET << std::endl;
				continue;
			}
			result = std::round(_getRate(date) * valuef * 100.0f) / 100.0f;
			std::cout << date << " => " << value << " = " << result << std::endl;
		} catch (const std::exception& e) {
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
}

const char* BitcoinExchange::FileNotOpenException::what() const throw() {
	return (RED "Failed to open file." RESET);
}

const char* BitcoinExchange::WrongFormatException::what() const throw() {
	return (RED "Wrong format." RESET);
}