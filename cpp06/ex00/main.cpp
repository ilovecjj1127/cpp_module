/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/10 12:35:06 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/16 17:14:09 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./convert <value>" << std::endl;
		return (1);
	}
	try
	{
		ScalarConverter::convert(argv[1]);

		std::cout << PINK "\n------------test------------" RESET << std::endl;
		ScalarConverter::convert("0");
		ScalarConverter::convert("nan");
		ScalarConverter::convert("42.0f");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
