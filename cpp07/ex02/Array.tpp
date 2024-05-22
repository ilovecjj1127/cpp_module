/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.tpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/22 11:58:16 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/05/22 16:54:06 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array(): _arr(new T[0]), _len(0)
{
	std::cout << GREEN "Array of size " << _len << " constructed!" RESET << std::endl;
}


template <typename T>
Array<T>::Array( unsigned int n ): _arr(new T[n]), _len(n)
{
	for (unsigned int i = 0; i < _len; i++)
		_arr[i] = T();
	std::cout << GREEN "Array of size " << _len << " constructed!" RESET << std::endl;
}

template <typename T>
Array<T>::Array( const Array &cpy ): _arr(new T[cpy._len]), _len(cpy._len)
{
	for (unsigned int i = 0; i < cpy._len; i++)
		this->_arr[i] = cpy._arr[i];
}

template <typename T> Array<T>::~Array()
{
	delete[] _arr;
	std::cout << GREEN "Array of size " << _len << " destructed!" RESET << std::endl;
}

template <typename T>
Array<T>	&Array<T>::operator=( const Array &cpy )
{
	if (this == &cpy)
		return (*this);
		
	delete[] this->_arr;
	this->_arr = new T[cpy._len];
	this->_len = cpy._len;
	for (unsigned int i = 0; i < cpy._len; i++)
		this->_arr[i] = cpy._arr[i];
	return (*this);
}

template <typename T>
T	&Array<T>::operator[]( unsigned int index ) const
{
	if (index >= this->_len)
		throw (Array::IndexOutBoundsException());
	else
		return (this->_arr[index]);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (this->_len);
}

template <typename T>
std::ostream &operator<<(std::ostream &os, const Array<T> &arr)
{
	os << "Array size:" << arr.size() << " [";
	for (unsigned int i = 0; i < arr.size(); i++)
	{
		os << arr[i];
		if (i < arr.size() - 1)
			os << ", ";
	}
	os << "]";
	return (os);
}

#endif
