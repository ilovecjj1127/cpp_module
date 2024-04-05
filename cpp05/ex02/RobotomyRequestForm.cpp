/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/04 18:23:03 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/04 18:24:43 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), _target("")
{
	
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ): 
AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm(): 
{
	
}