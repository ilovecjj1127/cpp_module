/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bsp.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/12 18:18:42 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/13 17:21:57 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	area( const Point a, const Point b, const Point c)
{
	Fixed	temp(a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY())
			+ c.getX() * (a.getY() - b.getY()));
	float area = temp.toFloat() * 0.5;
	return ((area >= 0) ? area : -area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float abc = area(a, b, c);
	float abp = area(a, b, point);
	float acp = area(a, c, point);
	float bcp = area(b, c, point);
	
	return (abp != 0 && acp != 0 && bcp != 0 && abp + acp + bcp <= abc);
}
