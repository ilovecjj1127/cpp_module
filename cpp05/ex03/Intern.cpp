/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/08 15:45:03 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/09 13:01:08 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Default Intern constructor called" << std::endl;
}

Intern::Intern( const Intern &cpy )
{
	*this = cpy;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern	&Intern::operator=( const Intern &cpy )
{
	(void) cpy;
	return (*this);
}

AForm	*Intern::makeForm( std::string formname, std::string target )
{
	AForm	*form;

	form = AForm::makeForm(formname, target);
	if (!form)
		throw (Intern::FormNotFoundException());
	else
	{
		std::cout << YELLOW "Intern creates " << formname << RESET << std::endl;
		return (form);
	}
}