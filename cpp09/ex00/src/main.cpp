#include "BitcoinExchange.hpp"

int main(int argc, char** argv) {
	if (argc != 2) {
		std::cerr << "Error: could not open file." << std::endl;
		return 1;
	}
	BitcoinExchange Bitcoin;
	try {
		Bitcoin.processInput(argv[1]);
	} catch (const std::exception& e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	return 0;
}