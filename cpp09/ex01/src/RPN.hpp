#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <stack>

#define RED "\033[91m"
#define GREEN "\033[92m"
#define PINK "\033[95m"
#define RESET "\033[0m"

class RPN
{
private:
	std::string _input;
	std::stack<int> _mystack;

	RPN( const RPN& other );
	RPN& operator = ( const RPN& other );

	void _checkInputValid( std::string input );
	// "+ - / *" according to the operator return different function.
	// use stack to store number, when operator pop two and calculate;

	void _operate( char& c );

public:
	RPN( std::string input );
	~RPN();

	int calculate();

	class InvalidInputException: public std::exception {
		public: virtual const char *what() const throw();
	};

	class CalculationErrorException: public std::exception {
		public: virtual const char *what() const throw();
	};
};

