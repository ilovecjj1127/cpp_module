/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/29 10:55:48 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/01/29 18:10:30 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <Contact.hpp>


class PhoneBook
{

private:

	Contact	contacts[8];

public:
	// Constructor
	PhoneBook(void);
	// Destructor
	~PhoneBook(void);

	// Methods
	void	add_contact(void);
	void	search_contact(void) const;
	void	print_contacts(void) const;
};




#endif