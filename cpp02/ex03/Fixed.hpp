/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 12:51:42 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/12 17:50:00 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


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
	Fixed( const int value );
	Fixed( const float value );
	Fixed( const Fixed &fixed );
	~Fixed();
	
	Fixed	&operator = ( const Fixed &fixed );
	
	float	toFloat( void ) const;
	int		toInt( void ) const;
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	bool	operator < ( const Fixed &fixed ) const;
	bool	operator > ( const Fixed &fixed ) const;
	bool	operator >= ( const Fixed &fixed ) const;
	bool	operator <= ( const Fixed &fixed ) const;
	bool	operator == ( const Fixed &fixed ) const;
	bool	operator != ( const Fixed &fixed ) const;

	Fixed	operator + ( const Fixed &fixed ) const;
	Fixed	operator - ( const Fixed &fixed ) const;
	Fixed	operator * ( const Fixed &fixed ) const;
	Fixed	operator / ( const Fixed &fixed ) const;

	Fixed	&operator ++ ( void );
	Fixed	&operator -- ( void );
	Fixed	operator ++ ( int );
	Fixed	operator -- ( int );

	static Fixed		&min( Fixed &fixed1, Fixed &fixed2 );
	static const Fixed	&min( const Fixed &fixed1, const Fixed &fixed2 );
	static Fixed		&max( Fixed &fixed1, Fixed &fixed2 );
	static const Fixed	&max( const Fixed &fixed1, const Fixed &fixed2 );
};

std::ostream & operator << ( std::ostream &cout, const Fixed &fixed );

#endif
