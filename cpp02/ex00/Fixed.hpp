/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 12:51:42 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/07 11:59:12 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
	int	_value;
	static const int	_bits = 8;
public:
	Fixed();
	Fixed( const Fixed &fixed );
	Fixed & operator = ( const Fixed &fixed);
	~Fixed();
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};


