#include "easyfind.hpp"

int main( void ) {
	try {
		// vector
		std::vector<int> myvector = {32, 54, 23, 55, 3};
		std::vector<int>::iterator it_vec = easyfind(myvector, 55);
		std::cout << "Found in vector: " << *it_vec << std::endl;

		// list
		std::list<int> mylist = {32, 54, 23, 55, 3};
		std::list<int>::iterator it_lst = easyfind(mylist, 23);
		std::cout << "Found in list: " << *it_lst << std::endl;

		// not found
		it_vec = easyfind(myvector, 1);
		std::cout << "Found in vector: " << *it_vec << std::endl;
	} catch( const std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}