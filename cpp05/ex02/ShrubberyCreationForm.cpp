/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/04 17:49:39 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/04 18:05:38 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137),
_target("")
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ):
AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}