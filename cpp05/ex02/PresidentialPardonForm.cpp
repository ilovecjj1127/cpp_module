/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/04 18:17:31 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/04 18:21:15 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): 
AForm("PresidentialPardonForm", 25, 5), _target("")
{
}

PresidentialPardonForm::PresidentialPardonForm( std::string target): 
AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}