/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/04 18:16:55 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/09 11:26:02 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm: public AForm
{
private:
	std::string	_target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm( std::string	target );
	PresidentialPardonForm( const PresidentialPardonForm &cpy );
	~PresidentialPardonForm();

	PresidentialPardonForm	&operator=( const PresidentialPardonForm &cpy );

	std::string		getTarget( void ) const;
	void			execute( const Bureaucrat &executor ) const;
	static AForm	*makeForm( AForm *form, std::string type, std::string target );
};

std::ostream	&operator<<( std::ostream &cout, const PresidentialPardonForm &form );


