/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/07 11:57:15 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/12 18:15:44 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void )
{
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << "a is " << a << std::endl;
	std::cout << "++a is " << ++a << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "a++ is " << a++ << std::endl;
	std::cout << "a is " << a << std::endl;
	
	std::cout << "\nb is " << b << std::endl;
	std::cout << "max of a and b is " << Fixed::max( a, b ) << std::endl;
	std::cout << "min of a and b is " << Fixed::min( a, b ) << std::endl;
	
	Fixed	c( 42.42f );
	Fixed	d( 5 );
	std::cout << c / d << std::endl;
	std::cout << c + d << std::endl;
	std::cout << c - d << std::endl;
	
	return (0);
}