#pragma once

#include <exception>
#include <iostream>
#include <vector>
#include <algorithm>

# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define PINK "\033[95m"
# define RESET "\033[0m"

class Span
{
private:
	size_t _size;
	std::vector<int> _myvector;

public:
	Span( size_t size );
	Span( const Span& other );
	~Span();

	Span &operator = ( const Span& other );

	void addNumber( int num );
	void addRange( std::vector<int>::iterator begin, std::vector<int>::iterator end );
	int shortestSpan();
	int longestSpan();
	void printNumber() const;

	class OutOfRangeException: public std::exception {
		public:
			virtual const char *what(void) const throw() {
				return (RED "No Space for Span." RESET);
			}
	};

	class SpanNotFoundException: public std::exception {
		public:
			virtual const char *what(void) const throw() {
				return (RED "Span not found." RESET);
			}
	};
};


