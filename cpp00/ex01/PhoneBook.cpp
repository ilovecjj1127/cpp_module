/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/29 11:07:32 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/01/31 14:47:21 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook() 
{	
	std::cout << "Constructor PhoneBook" << std::endl;
	_count = 0;
	return ;
}

PhoneBook::~PhoneBook()
{	
	std::cout << "Destructor PhoneBook" << std::endl;
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
	while (last_name.empty())
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
	this->_contacts[i % 8] = contact;
	if (i >= 8)
		_count = 8; //this->_count?
	else
		_count = i + 1;
	i++;
}

void	PhoneBook::search_contact() const
{
	int	index;

	this->print_contacts();
	std::cout << "Enter the index: ";
	std::cin >> index;
	if (std::cin.fail() || index >= this->_count || index < 0)
	{
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Invalid index!" << std::endl;
		return ;
	}
	this->_contacts[index].print_contact();
}

void	PhoneBook::print_contacts() const
{
	std::cout << std::right << std::setw(10) << "index" << "|";
	std::cout << std::right << std::setw(10) << "first name" << "|";
	std::cout << std::right << std::setw(10) << "last name" << "|";
	std::cout << std::right << std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < this->_count; i++)
	{
		std::cout << std::right << std::setw(10) << i << "|";
		this->_contacts[i].print_info();
	}
}