/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/29 11:07:32 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/01/29 18:11:21 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook() {
	
	std::cout << "Constructor PhoneBook\n" << std::endl;
	return ;
}

PhoneBook::~PhoneBook() {
	
	std::cout << "Destructor PhoneBook\n" << std::endl;
	return ;
}

void	PhoneBook::add_contact()
{
	static int	i;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "First Name:" << std::endl;
	while (first_name.empty())
		std::cin >> first_name;
	std::cout << "Last Name:" << std::endl;
	while (first_name.empty())
		std::cin >> last_name;
	std::cout << "Nickame:" << std::endl;
	while (nickname.empty())
		std::cin >> nickname;
	std::cout << "Phone Number:" << std::endl;
	while (phone_number.empty())
		std::cin >> phone_number;
	std::cout << "Darkest Secret:" << std::endl;
	while (darkest_secret.empty())
		std::cin >> darkest_secret;
	Contact contact(first_name, last_name, nickname, phone_number, darkest_secret);
	this->contacts[i % 8] = contact;
	i++;
}

void	PhoneBook::search_contact() const
{
	
}

void	PhoneBook::print_contacts() const
{
	int	i = 0;
	
	while (i < 8)
	{
		Contact	contact = this->contacts[i];
		contact.print_contact();
		i++;
	}
}