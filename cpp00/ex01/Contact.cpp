/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/29 12:09:11 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/01 11:51:28 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Constructor Contact" << std::endl;
}

/* Initialization list */
Contact::Contact(std::string first, std::string last, std::string nick, std::string phone, std::string secret):
		_first_name(first), _last_name(last), _nickname(nick), _phone_number(phone), _darkest_secret(secret)
{
	std::cout << "Constructor Contact" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Destructor Contact" << std::endl;
}

void	Contact::print_info(void) const
{
	std::string first_name = _first_name;
	std::string last_name = _last_name;
	std::string nickname = _nickname;

	if (first_name.length() > 10)
		first_name = first_name.substr(0, 9) + ".";
	if (last_name.length() > 10)
		last_name = last_name.substr(0, 9) + ".";
	if (nickname.length() > 10)
		nickname = nickname.substr(0, 9) + ".";
	std::cout << std::right << std::setw(10) << first_name << "|";
	std::cout << std::right << std::setw(10) << last_name << "|";
	std::cout << std::right << std::setw(10) << nickname << std::endl;	
}

void	Contact::print_contact(void) const
{
	std::cout << "First name: " << this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phone_number << std::endl;
	std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
}