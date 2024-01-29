/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/29 12:09:11 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/01/29 17:57:28 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>

Contact::Contact(void) {
	
}

Contact::Contact(std::string first, std::string last, std::string nick, std::string phone, std::string secret):
		_first_name(first), _last_name(last), _nickname(nick), _phone_number(phone), _darkest_secret(secret) {
	std::cout << "Constructor Contact\n" << std::endl;
}

Contact::~Contact(void) {
	std::cout << "Destructor Contact\n" << std::endl;
}

void	Contact::print_contact(void) const
{
	std::string first_name = _first_name;
	std::string last_name = _last_name;
	std::string nickname = _nickname;

	
}