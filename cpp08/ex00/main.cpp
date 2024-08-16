#include "easyfind.hpp"

int	main( void )
{
	int	myint;
	srand(time(NULL));
	try
	{
		std::vector<int>	myvector;

		for (int i = 1; i <= 5; i++)
			myvector.push_back(rand() % 100);
		std::cout << PINK "-----test for vector-----\n" RESET << "vector contains:";
		for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
			std::cout << ' ' << *it;
		std::cout << "\nYou want to find number: ";
		std::cin >> myint;
		std::vector<int>::iterator	result = easyfind(myvector, myint);
		std::cout << "Found in vector: " << *result << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::list<int>	mylist;

		for (int i = 1; i <= 5; i++)
			mylist.push_back(rand() % 100);
		std::cout << PINK "\n\n-----test for list-----\n" RESET << "list contains:";
		for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); ++it)
			std::cout << ' ' << *it;
		std::cout << "\nYou want to find number: ";
		std::cin >> myint;
		std::list<int>::iterator	result = easyfind(mylist, myint);
		std::cout << "Found in vector: " << *result << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << GREEN "\n\n---------Bye----------\n" RESET << std::endl;
	return (0);
}