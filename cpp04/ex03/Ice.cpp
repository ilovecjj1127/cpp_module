/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:00:30 by jessie            #+#    #+#             */
/*   Updated: 2024/03/01 15:01:48 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ): AMateria("ice")
{
	std::cout << "ice constructor called" << std::endl;
}

Ice::Ice( const Ice &cpy )
{
	std::cout << "ice copy constructor called" << std::endl;
	*this = cpy;
}

Ice::~Ice( void )
{
	std::cout << "ice destructor called" << std::endl;
}

Ice	&Ice::operator=( const Ice &cpy )
{
	if (this == &cpy)
		return (*this);
	this->_type = cpy.getType();
	return (*this);
}

AMateria	*Ice::clone() const
{
	AMateria	*newIce = new Ice();
	return (newIce);
}

void	Ice::use( ICharacter &target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}