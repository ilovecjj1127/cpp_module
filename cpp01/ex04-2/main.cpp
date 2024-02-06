/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/05 16:28:20 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/05 16:31:03 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	
	Sed	replace((std::string)argv[1], (std::string)argv[2], (std::string)argv[3]);
	replace.replaceFile();
	return (0);
}