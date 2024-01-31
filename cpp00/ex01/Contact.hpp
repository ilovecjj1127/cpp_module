/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/29 11:46:36 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/01/31 12:37:09 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact {

public:
	// Constructor
	Contact(void);
	Contact(std::string first, 
			std::string last, 
			std::string nick, 
			std::string phone, 
			std::string secret);
	// Destructor
	~Contact(void);
	// Methods
	void	print_info(void) const;
	void	print_contact(void) const;

private:

	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;

};

#endif