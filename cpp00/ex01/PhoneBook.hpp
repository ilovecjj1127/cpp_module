/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/29 10:55:48 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/01 11:41:57 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#define RED "\033[91;1m"
#define GREEN "\033[92;1m"
#define YELLOW "\033[93;1m"
#define BLUE "\033[94;1m"
#define PINK "\033[95;1m"
#define CLEAR "\033[0m"

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