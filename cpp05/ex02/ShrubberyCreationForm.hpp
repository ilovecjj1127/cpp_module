/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/04 15:56:49 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/04 18:12:45 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
private:
	std::string	_target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm( std::string target );
	~ShrubberyCreationForm();

	
};

