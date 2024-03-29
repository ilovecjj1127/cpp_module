/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/05 14:21:30 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/06 10:56:12 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(/* args */)
{
	std::cout << GREEN "Constructor Harl" RESET << std::endl;
}

Harl::~Harl()
{
	std::cout << RED "Destructor Harl" RESET << std::endl;
}

void	Harl::complain( std::string level )
{
	void	(Harl::*pmf[])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string	levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])	
			(this->*pmf[i])();
	}
}

void	Harl::debug( void )
{
	std::cout << "I am debug!!!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I am info!!!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I am warning!!!" << std::endl;
}

void	Harl::error( void )
{
	std::cout << "I am error!!!" << std::endl;
}
