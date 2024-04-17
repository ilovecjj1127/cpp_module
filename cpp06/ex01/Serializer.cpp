/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/17 11:55:55 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/17 14:08:21 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t	Serializer::serialize( Data *ptr )
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserialize( uintptr_t raw )
{
	return (reinterpret_cast<Data *>(raw));
}