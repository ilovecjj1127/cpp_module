/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/26 10:44:56 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/26 12:43:17 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): _type("")
{
	std::cout << "WrongAnimal: default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const std::string type ): _type(type)
{
	std::cout << "WrongAnimal: type constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &cpy )
{
	std::cout << "WrongAnimal: copy constructor called" << std::endl;
	*this = cpy;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal: default destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &cpy )
{
	std::cout << "WrongAnimal: copy operator called" << std::endl;
	this->_type = cpy._type;
	return (*this);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << RED "what WrongAnimal do you mean?" RESET << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->_type);
}