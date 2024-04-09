/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/04 18:21:27 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/09 11:26:57 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <cstdlib> //<stdlib.h>

class Bureaucrat;

class RobotomyRequestForm: public AForm
{
private:
	std::string	_target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm( std::string	target );
	RobotomyRequestForm( const RobotomyRequestForm &cpy );
	~RobotomyRequestForm();

	RobotomyRequestForm	&operator=( const RobotomyRequestForm &cpy );

	std::string		getTarget( void ) const;
	void			execute( const Bureaucrat &executor ) const;
	static AForm	*makeForm( AForm *form, std::string type, std::string target );
};

std::ostream	&operator<<( std::ostream &cout, const RobotomyRequestForm &form );