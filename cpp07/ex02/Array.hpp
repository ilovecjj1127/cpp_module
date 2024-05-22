/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/26 09:55:39 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/05/22 16:45:47 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define PINK "\033[95m"
# define RESET "\033[0m"

template <typename T> class Array {
private:
	T*				_arr;
	unsigned int	_len;

public:
	Array();
	Array( unsigned int n );
	Array( const Array &cpy );
	~Array();

	Array<T>	&operator=( const Array &cpy );
	T			&operator[]( unsigned int index ) const;

	unsigned int	size() const;

	class	IndexOutBoundsException: public std::exception
	{
		public:
			virtual const char	*what( void ) const throw() {return (RED "Index out of bounds." RESET);};
	};
};

template <typename T>
std::ostream &operator<<(std::ostream &os, const Array<T> &arr);

#include "Array.tpp"

