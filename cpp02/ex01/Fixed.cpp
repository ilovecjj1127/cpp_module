/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 12:54:45 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/08 15:35:01 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	this->_fixedPointNb = 0;
	std::cout << GREEN "Default constructor called" RESET << std::endl;
}

Fixed::Fixed( const int value )
{
	std::cout << GREEN "Int constructor called" RESET << std::endl;
	this->_fixedPointNb = value << this->_bits;
}

Fixed::Fixed( const float value )
{
	std::cout << GREEN "Float constructor called" RESET << std::endl;
	int		intpart = roundf(value); // int part
	float	fracpart = value - intpart;
	this->_fixedPointNb = (intpart << _bits);
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

std::ostream & operator << ( std::ostream &cout, const Fixed &fixed )
{
	// cout << fixed.toFloat();
	return (cout);
}