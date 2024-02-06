/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 10:38:29 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/06 10:55:51 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	autoH;
	autoH.complain("DEBUG");
	autoH.complain("INFO");
	autoH.complain("WARNING");
	autoH.complain("ERROR");
	return (0);
}