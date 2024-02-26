/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/26 10:48:14 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/26 11:47:50 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat( void ): Animal("Cat")
{
	std::cout << YELLOW "Cat: default constructor called" RESET << std::endl;
}

Cat::Cat( const Cat &cpy )
{
	std::cout << YELLOW "Cat: copy constructor called" RESET << std::endl;
	*this = cpy;
}

Cat::~Cat( void )
{
	std::cout << YELLOW "Cat: default destructor called" RESET << std::endl;
}

Cat &Cat::operator=( const Cat &cpy )
{
	std::cout << YELLOW "Cat: copy operator called" RESET << std::endl;
	this->_type = cpy._type;
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << YELLOW "meeoww!" RESET << std::endl;
}

