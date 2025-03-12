#include "RPN.hpp"

RPN::RPN( std::string input ): _input(input)
{
	_checkInputValid(input);
}

RPN::~RPN(){}

RPN::RPN( const RPN& other ) {
	this->_input = other._input;
	this->_mystack = other._mystack;
}

RPN& RPN::operator=( const RPN& other ) {
	if (this != &other) {
		this->_input = other._input;
		this->_mystack = other._mystack;
	}
	return *this;
}

void RPN::_checkInputValid( std::string input ) {
	size_t found = input.find_first_not_of("1234567890 /-+*");
	if (found != std::string::npos) {
		throw InvalidInputException();
	}
	for (size_t i = 0;i < input.size(); i++) {
		if ((i % 2) ^ (input[i] == ' ')) {
			throw InvalidInputException();
		}
	}
}

void RPN::_operate( char& c ) {
	try {
		int b = _mystack.top();
		_mystack.pop();
		int a = _mystack.top();
		_mystack.pop();
		if (c == '+') _mystack.push(a + b);
		else if (c == '-') _mystack.push(a - b);
		else if (c == '*') _mystack.push(a * b);
		else {
			if (b == 0) throw CalculationErrorException();
			_mystack.push(a / b);
		}
	} catch (const std::exception& e) {
		std::cerr << RED "Error: " << e.what() << RESET << std::endl;
	}
}

int RPN::calculate() {
	for (size_t i = 0; i < _input.size(); i++) {
		if (_input[i] == ' ') continue;
		if (std::isdigit(_input[i])) {
			_mystack.push(_input[i] - '0');
		} else {
			_operate(_input[i]);
		}
	}
	if (_mystack.size() != 1) {
		throw CalculationErrorException();
	}
	return _mystack.top();
}

const char* RPN::InvalidInputException::what() const throw() {
	return ("Error: Invalid Input: only digits and operators and separated by one space");
}

const char* RPN::CalculationErrorException::what() const throw() {
	return ("Error during calculation");
}