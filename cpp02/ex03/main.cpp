/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/07 11:57:15 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/13 17:25:43 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main( void )
{
	Point	A(10, 10), B(20, 10), C(10, 20);
	Point	p1(10, 15), p2(15, 10.1f), p3(20, 15), p4(15, -100);

	std::cout << bsp(A, B, C, p1) << ": p1 is on the edge" << std::endl;
	std::cout << bsp(A, B, C, p2) << ": p2 is inside" << std::endl;
	std::cout << bsp(A, B, C, p3) << ": p3 is outside" << std::endl;
	std::cout << bsp(A, B, C, p3) << ": p4 is outside" << std::endl;
	return (0);
}