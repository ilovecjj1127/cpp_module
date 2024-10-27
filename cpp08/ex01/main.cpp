#include "Span.hpp"

int main() {
	std::cout << PINK "-----addNumber() test-----" RESET << std::endl;
	try {
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		sp.printNumber();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << PINK "\n-----test for 10000 numbers-----" RESET << std::endl;
	try {
		Span sp = Span(10000);

		srand(time(NULL));
		for (int i = 0; i < 10000; i++) {
			sp.addNumber(rand());
		}

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << PINK "\n-----range of iterators numbers-----" RESET << std::endl;
	try {
		std::vector<int> numbers = {6, 3, 17, 9, 11};

		Span sp(5);
		sp.addRange(numbers.begin(), numbers.end());
		sp.printNumber();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}	

	std::cout << PINK "\n-----OutOfRangeException test-----" RESET << std::endl;
	try {
		Span sp = Span(3);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << PINK "\n-----NoSpanFoundException test-----" RESET << std::endl;
	try {
		Span sp = Span(5);

		sp.addNumber(6);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}