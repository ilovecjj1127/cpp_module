/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/26 10:44:53 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/26 12:46:29 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal("WrongCat")
{
	std::cout << YELLOW "WrongCat: default constructor called" RESET << std::endl;
}

WrongCat::WrongCat( const WrongCat &cpy )
{
	std::cout << YELLOW "WrongCat: copy constructor called" RESET << std::endl;
	*this = cpy;
}

WrongCat::~WrongCat( void )
{
	std::cout << YELLOW "WrongCat: default destructor called" RESET << std::endl;
}

WrongCat &WrongCat::operator=( const WrongCat &cpy )
{
	std::cout << YELLOW "WrongCat: copy operator called" RESET << std::endl;
	this->_type = cpy._type;
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << YELLOW "meeoww!" RESET << std::endl;
}