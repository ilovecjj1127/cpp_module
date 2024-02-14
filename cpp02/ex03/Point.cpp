/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/12 18:18:51 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/14 12:12:55 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0){}

Point::Point( const float nb1, const float nb2 ): x(nb1), y(nb2){}

Point::Point( const Point &point ):x(point.x), y(point.y){}

Point::~Point(){}

Fixed	Point::getX( void ) const { return (x); }

Fixed	Point::getY( void ) const { return (y); }

Point	&Point::operator=( const Point &point )
{
	if (this != &point)
	{
		(Fixed)this->x = point.getX();
		(Fixed)this->y = point.getY();
	}
	return (*this);
}

