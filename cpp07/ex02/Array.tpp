/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.tpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/26 13:21:57 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/26 13:30:14 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Array.hpp"

template <typename T> Array<T>::Array(): _arr(new T[0]), _len(n)
{
	std::cout << "Array of size " << _len << " constructed!" << std::endl;
}


template <typename T> Array<T>::Array( unsigned int n ): _arr(new T[n]), _len(n)
{
	for (size_t i = 0; i < _len; i++)
	{
		_arr[i] = T();
		std::cout << "Array[" << i << "] is" << _arr[i] << std::endl;
	}
	std::cout << "Array of size " << _len << " constructed!" << std::endl;
}

template <typename T> Array<T>::Array( const Array &cpy )
{
	
}

template <typename T> Array<T>::~Array()
{
	delete[] _arr;
	std::cout << "Array of size " << _len << " destructed!" << std::endl;
}

template <typename T>
Array<T>	&Array<T>::operator=( const Array &cpy )
{
	
}