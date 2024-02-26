/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/26 10:44:58 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/26 11:49:03 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog")
{
	std::cout << BLUE "Dog: default constructor called" RESET << std::endl;
}

Dog::Dog( const Dog &cpy )
{
	std::cout << BLUE "Dog: copy constructor called" RESET << std::endl;
	*this = cpy;
}

Dog::~Dog( void )
{
	std::cout << BLUE "Dog: default destructor called" RESET << std::endl;
}

Dog &Dog::operator=( const Dog &cpy )
{
	std::cout << BLUE "Dog: copy operator called" RESET << std::endl;
	this->_type = cpy._type;
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << BLUE "wooolf!" RESET << std::endl;
}
