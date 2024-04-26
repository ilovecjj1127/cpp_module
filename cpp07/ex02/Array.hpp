/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/26 09:55:39 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/26 13:29:21 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T> class Array {
private:
	T*				_arr;
	unsigned int	_len;

public:
	Array();
	Array( unsigned int n );
	Array( const Array &cpy );
	~Array();

	Array	&operator=( const Array &cpy );

	class	IndexOutBounds
};


