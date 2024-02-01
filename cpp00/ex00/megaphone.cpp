/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 13:34:30 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/01 14:54:34 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

std::string str_toupper(std::string str)
{
	int	len;

	len = str.length();
	for (int i = 0; i < len; i++){
		str[i] = std::toupper(str[i]);
	}

	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < argc; i++){
		std::cout << str_toupper(argv[i]);
	}
	std::cout << std::endl;
	return (0);
}