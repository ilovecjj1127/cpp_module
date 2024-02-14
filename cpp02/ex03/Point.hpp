/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/12 18:18:11 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/13 15:43:11 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	const Fixed	x;
	const Fixed	y;
public:
	Point();
	Point( const float nb1, const float nb2 );
	Point( const Point &point );
	~Point();

	Fixed	getX( void ) const;
	Fixed	getY( void ) const;
	Point	&operator=( const Point &point );
};

bool bsp( Point const a, Point const b, Point const c, Point const point);


#endif