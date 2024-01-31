/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/29 11:34:26 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/01/31 12:45:27 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main() 
{
	PhoneBook 	phonebook;
	std::string	input;
	
	while (1)
	{
		std::cout << "Please enter: ADD | SEARCH | EXIT" << std::endl;
		std::cin >> input;
		if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search_contact();
		else if (input == "EXIT")
			break;
	}
	return (0);
}