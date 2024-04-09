/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/08 15:18:52 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/09 12:24:27 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class AForm;

class Intern
{
private:
	/* data */
public:
	Intern();
	Intern( const Intern &cpy );
	~Intern();

	Intern	&operator=( const Intern &cpy );

	AForm	*makeForm( std::string formname, std::string target );
	
	class	FormNotFoundException: public std::exception
	{
		public:
			virtual const char	*what( void ) const throw()
			{
				return (RED "Intern cannot find the Form" RESET);
			};
	};
};


