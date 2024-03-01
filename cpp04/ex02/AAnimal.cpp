/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/26 10:51:01 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/26 16:36:35 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ): _type("")
{
	std::cout << "AAnimal: default constructor called" << std::endl;
}

AAnimal::AAnimal( const std::string type ): _type(type)
{
	std::cout << "AAnimal: type constructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal &cpy )
{
	std::cout << "AAnimal: copy constructor called" << std::endl;
	*this = cpy;
}

AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal: destructor called" << std::endl;
}

AAnimal &AAnimal::operator=( const AAnimal &cpy )
{
	std::cout << "AAnimal: copy operator called" << std::endl;
	this->_type = cpy._type;
	return (*this);
}

std::string	AAnimal::getType( void ) const
{
	return (this->_type);
}
