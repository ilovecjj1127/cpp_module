#pragma once

#define RED "\033[91m"
#define GREEN "\033[92m"
#define PINK "\033[95m"
#define RESET "\033[0m"

#include <iostream>
#include <deque>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::deque<T>::iterator iterator;
	typedef typename std::deque<T>::const_iterator const_iterator;
	typedef typename std::deque<T>::reverse_iterator reverse_iterator;
	typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;

	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
	const_iterator cbegin() const { return this->c.cbegin(); }
	const_iterator cend() const { return this->c.cend(); }
	reverse_iterator rbegin() { return this->c.rbegin(); }
	reverse_iterator rend() { return this->c.rend(); }
	const_reverse_iterator crbegin() const { return this->c.crbegin(); }
	const_reverse_iterator crend() const { return this->c.crend(); }
};

//https://stackoverflow.com/questions/73440733/how-can-i-implement-my-own-stack-iterator-in-c

