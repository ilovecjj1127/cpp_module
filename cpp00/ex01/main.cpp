/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/29 11:34:26 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/02 14:40:06 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main() 
{
	PhoneBook 	phonebook;
	std::string	input;
	
	while (1)
	{
		std::cout << YELLOW << "Please enter: ADD | SEARCH | EXIT" << CLEAR << std::endl;
		std::cin >> input;
		if (std::cin.eof())
			break;
		if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search_contact();
		else if (input == "EXIT")
			break;
		std::cout << phonebook.
	}
	return (0);
}