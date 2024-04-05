/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/04 18:16:55 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/04 18:20:34 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
private:
	std::string	_target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm( std::string	target );
	~PresidentialPardonForm();
};


