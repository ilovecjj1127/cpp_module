#include "RPN.hpp"

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Error: wrong argument" << std::endl;
        return 1;
    }
    try {
        RPN rpn(argv[1]);
        std::cout << rpn.calculate() << std::endl;
    } catch (const std::exception& e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	return 0;
}