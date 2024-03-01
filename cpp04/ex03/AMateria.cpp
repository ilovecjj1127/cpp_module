/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:18:46 by jessie            #+#    #+#             */
/*   Updated: 2024/03/01 22:40:19 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ): _type("")
{
	std::cout << "AMateria: default constructor called" << std::endl;
}

AMateria::AMateria( const std::string &type ): _type(type)
{
	std::cout << "AMateria: Type constructor called" << std::endl;
}

AMateria::AMateria( const AMateria &cpy )
{
	std::cout << "AMateria: copy constructor called" << std::endl;
	*this = cpy;
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria: destructor called" << std::endl;
}

AMateria	&AMateria::operator=( const AMateria &cpy )
{
	if (this == &cpy)
		return (*this);
	this->_type = cpy.getType();
	return (*this);
}

const std::string	&AMateria::getType() const
{
	return (_type);
}

void	AMateria::use( ICharacter &target ){
	(void) target;
}
