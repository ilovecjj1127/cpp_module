/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/02 14:07:56 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/02 15:17:52 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "memory address of str: " << &str << std::endl;
	std::cout << "memory address of stringPTR: " << stringPTR << std::endl;
	std::cout << "memory address of stringREF: " << &stringREF << std::endl;
	
	std::cout << "value of str: " << str << std::endl;
	std::cout << "value of stringPTR: " << *stringPTR << std::endl;
	std::cout << "value of stringREF: " << stringREF << std::endl;
	
	return (0);
}