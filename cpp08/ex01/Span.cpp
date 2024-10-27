#include "Span.hpp"

Span::Span( size_t size ): _size(size) {
}

Span::Span( const Span& other ) {
	*this = other;
}

Span &Span::operator = ( const Span& other ) {
	if (this == &other) {
		return *this;
	}
	this->_size = other._size;
	return *this;
}

Span::~Span() {
}

void Span::addNumber( int num ) {
	if (_myvector.size() == _size) {
		throw OutOfRangeException();
	}
	_myvector.push_back(num);
}

void Span::addRange( std::vector<int>::iterator begin, std::vector<int>::iterator end ) {
	while (begin != end) {
		addNumber(*begin);
		begin++;
	}
}

int Span::shortestSpan() {
	if (_myvector.size() <= 1) {
		throw SpanNotFoundException();
	}
	std::sort(_myvector.begin(), _myvector.end());
	int shortest = _myvector[1] - _myvector[0];
	for (size_t i = 2; i < _myvector.size(); i++) {
		shortest = std::min(shortest, _myvector[i] - _myvector[i - 1]);
	}
	return shortest;
}

int Span::longestSpan() {
	if (_myvector.size() <= 1) {
		throw SpanNotFoundException();
	}
	int max_num = *std::max_element(_myvector.begin(), _myvector.end());
	int min_num = *std::min_element(_myvector.begin(), _myvector.end());
	return (max_num - min_num);
}

void Span::printNumber() const {
	std::cout << GREEN "[Nums] : " RESET;
	for (int num : _myvector) {
		std::cout << num << " ";
	}
	std::cout << std::endl;
}