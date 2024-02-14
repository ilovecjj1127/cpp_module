/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 12:54:45 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/13 15:37:00 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_fixedPointNb = 0;
	std::cout << GREEN "Default constructor called" RESET << std::endl;
}

Fixed::Fixed( const Fixed &fixed )
{
	std::cout << GREEN "Copy constructor called" RESET << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << RED "Destructor called" RESET << std::endl;
}

Fixed &Fixed::operator=( const Fixed &fixed)
{
	std::cout << GREEN "Copy assignment operator called" RESET << std::endl;
	if (this != &fixed)	
		this->_fixedPointNb = fixed.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << YELLOW "getRawBits member function called" RESET << std::endl;
	return (this->_fixedPointNb);
}

void	Fixed::setRawBits( int const raw)
{
	this->_fixedPointNb = raw;
}