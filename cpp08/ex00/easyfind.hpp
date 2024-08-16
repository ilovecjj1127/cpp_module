#pragma once

#define RED "\033[91m"
#define GREEN "\033[92m"
#define PINK "\033[95m"
#define RESET "\033[0m"

#include <exception>
#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include <cstdlib>

class	NotFoundException: public std::exception
{
	public:
		virtual const char	*what( void ) const throw()
		{
			return (RED "Int is not found in container" RESET);
		};
};

template <typename T>
typename T::iterator	easyfind(T &container, const int num)
{
	typename T::iterator	it;

	it = std::find(container.begin(), container.end(), num);
	if (it == container.end())
		throw (NotFoundException());
	return (it);
}