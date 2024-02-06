/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 10:53:24 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/06 12:24:16 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << RED "incorrect arguments" RESET << std::endl;
		return (1);
	}
	Harl	harl;
	harl.complain(argv[1]);
}