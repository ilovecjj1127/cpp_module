/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/17 11:40:24 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/17 14:36:43 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>

struct Data
{
	float	f;
	int		i;
	char	c;
};

class Serializer
{
private:
	Serializer();
	Serializer( const Serializer &cpy );
	~Serializer();

	Serializer	&operator=( const Serializer &cpy );

public:
	static uintptr_t	serialize( Data *ptr );
	static Data			*deserialize( uintptr_t raw );
};