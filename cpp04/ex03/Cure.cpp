/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:04:09 by jessie            #+#    #+#             */
/*   Updated: 2024/03/01 14:59:35 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ): AMateria("cure")
{
	std::cout << "cure constructor called" << std::endl;
}

Cure::Cure( const Cure &cpy )
{
	std::cout << "cure cpy constructor called" << std::endl;
	*this = cpy;
}

Cure::~Cure( void )
{
	std::cout << "cure destructor called" << std::endl;
}

Cure	&Cure::operator=( const Cure &cpy )
{
	if (this == &cpy)
		return (*this);
	this->_type = cpy.getType();
	return (*this);
}

AMateria	*Cure::clone() const
{
	AMateria	*newCure = new Cure();
	return (newCure);
}

void	Cure::use( ICharacter &target )
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
