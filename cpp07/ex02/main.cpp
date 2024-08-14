#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 10
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];

	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand() % 100;
		numbers[i] = value;
		mirror[i] = value;
	}
	std::cout << PINK "\n---------numbers-----------" RESET << std::endl;
	std::cout << numbers << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
		}
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> deep_copy(tmp);
		std::cout << PINK "---------tmp-----------" RESET << std::endl;
		std::cout << tmp << std::endl;
		std::cout << PINK "---------copy-----------" RESET << std::endl;
		std::cout << deep_copy << std::endl;
		std::cout << PINK "\n---------deep copy-----------" RESET << std::endl;
		for (int i = 0; i < MAX_VAL; i++)
			numbers[i] = rand() % 100;
		std::cout << "numbers: "<< numbers << std::endl;
		std::cout << "deep_copy not changed: "<< deep_copy << std::endl;
	}

	try
	{
		numbers[-1] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	delete [] mirror;
	return 0;
}