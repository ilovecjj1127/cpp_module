/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/05 14:21:30 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/06 12:45:23 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(/* args */)
{
	std::cout << GREEN "Constructor Harl\n" RESET << std::endl;
}

Harl::~Harl()
{
	std::cout << RED "Destructor Harl" RESET << std::endl;
}

void	Harl::complain( std::string level )
{
	std::string	levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	
	int	i = -1;
	while (++i < 4)
	{
		if (level == levels[i])	
			break ;
	}
	switch (i){
		case (0):
			debug();
		case (1):
			info();
		case (2):
			warning();
		case (3):
			error();
			break ;
		default:
			std::cout << "[ OTHER COMPLAINTS ]\n" << std::endl;
	}
}

void	Harl::debug( void )
{
	std::cout << YELLOW "[ DEBUG ]" RESET << std::endl;
	std::cout << "I am debug!!!\n" << std::endl;
}

void	Harl::info( void )
{
	std::cout << BLUE "[ INFO ]" RESET << std::endl;
	std::cout << "I am info!!!\n" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << PINK "[ WARNING ]" RESET << std::endl;
	std::cout << "I am warning!!!\n" << std::endl;
}

void	Harl::error( void )
{
	std::cout << RED "[ ERROR ]" RESET << std::endl;
	std::cout << "I am error!!!\n" << std::endl;
}
