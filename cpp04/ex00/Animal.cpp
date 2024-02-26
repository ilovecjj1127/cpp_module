/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/26 10:51:01 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/26 12:25:06 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ): _type("")
{
	std::cout << "Animal: default constructor called" << std::endl;
}

Animal::Animal( const std::string type ): _type(type)
{
	std::cout << "Animal: type constructor called" << std::endl;
}

Animal::Animal( const Animal &cpy )
{
	std::cout << "Animal: copy constructor called" << std::endl;
	*this = cpy;
}

Animal::~Animal( void )
{
	std::cout << "Animal: default destructor called" << std::endl;
}

Animal &Animal::operator=( const Animal &cpy )
{
	std::cout << "Animal: copy operator called" << std::endl;
	this->_type = cpy._type;
	return (*this);
}

void	Animal::makeSound( void ) const
{
	std::cout << RED "what animal do you mean?" RESET << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (this->_type);
}
