/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/04 18:21:27 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/04 18:22:52 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
private:
	std::string	_target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm( std::string target );
	~RobotomyRequestForm();
	
};