#pragma once

#include <iostream>
#include <deque>
#include <stack>

template <typename T>
class MutantStack : public std::stack
{
private:
	/* data */
public:
	typedef typename std::deque<T>::iterator iterator;

	iterator begin();
	iterator end();
	iterator
};

