/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/17 16:09:05 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/17 17:51:21 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Types.hpp"

int	main()
{
	Base	*base;

	base = generate();
	
	identify(base);
	identify(*base);
	delete base;
	return (0);
}