/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 13:34:30 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/01/26 14:40:02 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

std::string str_toupper(std::string str) {
	std::string result = str;

	for (char& c: result){
		c = std::toupper(c);
	}

	return result;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < argc; i++){
		std::cout << str_toupper(argv[i]);
	}
	std::cout << std::endl;
	return 0;
}