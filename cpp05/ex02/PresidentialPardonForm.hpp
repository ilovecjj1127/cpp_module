/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/04 18:16:55 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/08 14:06:03 by jiajchen      ########   odam.nl         */
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

	std::string	getTarget( void ) const;
	void		execute( const Bureaucrat &executor ) const;
};

std::ostream	&operator<<( std::ostream &cout, const PresidentialPardonForm &form );


