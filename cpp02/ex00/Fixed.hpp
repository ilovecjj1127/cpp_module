/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 12:51:42 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/08 13:40:08 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


/**
 * Orthodox Canonical Form to represent a fixed-point number
 * static constant integer
*/

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"
#define PINK "\033[95m"
#define RESET "\033[0m"

class Fixed
{
private:
	int					_fixedPointNb;
	static const int	_bits = 8;
public:
	Fixed();
	Fixed( const Fixed &fixed );
	Fixed & operator = ( const Fixed &fixed );
	~Fixed();
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif
