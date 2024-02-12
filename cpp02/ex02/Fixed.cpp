/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 12:54:45 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/12 18:12:53 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	this->_fixedPointNb = 0;
	// std::cout << GREEN "Default constructor called" RESET << std::endl;
}

Fixed::Fixed( const int value )
{
	// std::cout << GREEN "Int constructor called" RESET << std::endl;
	this->_fixedPointNb = value << this->_bits;
}

Fixed::Fixed( const float value )
{
	// std::cout << GREEN "Float constructor called" RESET << std::endl;
	this->_fixedPointNb = roundf(value * (1 << this->_bits));
}

Fixed::Fixed( const Fixed &fixed )
{
	// std::cout << GREEN "Copy constructor called" RESET << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	// std::cout << RED "Destructor called" RESET << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	// std::cout << YELLOW "getRawBits member function called" RESET << std::endl;
	return (this->_fixedPointNb);
}

void	Fixed::setRawBits( int const raw)
{
	this->_fixedPointNb = raw;
}

float	Fixed::toFloat( void ) const
{
	return (static_cast<float>(this->_fixedPointNb) / (1 << this->_bits));
}

int	Fixed::toInt( void ) const
{
	return (this->_fixedPointNb >> this->_bits);
}

Fixed &Fixed::operator=( const Fixed &fixed )
{
	// std::cout << GREEN "Copy assignment operator called" RESET << std::endl;
	this->_fixedPointNb = fixed.getRawBits();
	return (*this);
}

std::ostream & operator << ( std::ostream &cout, const Fixed &fixed )
{
	cout << fixed.toFloat();
	return (cout);
}

/* Comparison Operators */
bool	Fixed::operator>( const Fixed &fixed ) const
{
	return (_fixedPointNb > fixed._fixedPointNb);
}

bool	Fixed::operator<( const Fixed &fixed ) const
{
	return (_fixedPointNb < fixed._fixedPointNb);
}

bool	Fixed::operator>=( const Fixed &fixed ) const
{
	return (_fixedPointNb >= fixed._fixedPointNb);
}

bool	Fixed::operator<=( const Fixed &fixed ) const
{
	return (_fixedPointNb <= fixed._fixedPointNb);
}

bool	Fixed::operator==( const Fixed &fixed ) const
{
	return (_fixedPointNb == fixed._fixedPointNb);
}

bool	Fixed::operator!=( const Fixed &fixed ) const
{
	return (_fixedPointNb != fixed._fixedPointNb);
}

/* arithmetic operators */
Fixed	Fixed::operator+( const Fixed &fixed ) const
{
	Fixed	temp;
	
	temp._fixedPointNb = _fixedPointNb + fixed._fixedPointNb;
	return (temp);
}

Fixed	Fixed::operator-( const Fixed &fixed ) const
{
	Fixed	temp;
	
	temp._fixedPointNb = _fixedPointNb - fixed._fixedPointNb;
	return (temp);	
}

Fixed	Fixed::operator*( const Fixed &fixed ) const
{
	return (Fixed(this->toFloat() * fixed.toFloat()));	
}

Fixed	Fixed::operator/( const Fixed &fixed ) const
{
	return (Fixed(this->toFloat() / fixed.toFloat()));	
}

/* incre and decre */
Fixed	&Fixed::operator++( void )
{
	this->_fixedPointNb++;
	return (*this);
}

Fixed	&Fixed::operator--( void )
{
	this->_fixedPointNb--;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	temp = *this;
	
	this->_fixedPointNb++;
	return (temp);
}

Fixed	Fixed::operator--( int )
{
	Fixed	temp = *this;
	
	this->_fixedPointNb--;
	return (temp);
}

/* max and min */
Fixed	&Fixed::min( Fixed &fixed1, Fixed &fixed2 )
{
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed const	&Fixed::min( const Fixed &fixed1, const Fixed &fixed2 )
{
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed	&Fixed::max( Fixed &fixed1, Fixed &fixed2 )
{
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed const	&Fixed::max( const Fixed &fixed1, const Fixed &fixed2 )
{
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}

