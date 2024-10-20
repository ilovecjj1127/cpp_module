#pragma once

#include <iostream>
#include <exception>
#include <vector>
#include <list>
#include <iostream>

class NotFoundException: public std::exception
{
	public:
		const char	*what( void ) const throw() {
			return ("Integer not found");
		}
};


template <typename T>
typename T::iterator easyfind(T &t, int num)
{
	typename T::iterator it = std::find(t.begin(), t.end(), num);
	if (it == t.end()) {
		throw NotFoundException();
	}
	return it;
}
