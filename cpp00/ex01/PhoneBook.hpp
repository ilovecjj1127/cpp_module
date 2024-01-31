/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/29 10:55:48 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/01/31 12:02:53 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"


class PhoneBook
{
public:
	// Constructor
	PhoneBook(void);
	// Destructor
	~PhoneBook(void);

	// Methods
	void	add_contact(void);
	void	search_contact(void) const;
	void	print_contacts(void) const;

private:
	Contact	_contacts[8];
	int		_count;
	
};




#endif