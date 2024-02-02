/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/02 09:29:07 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/02 12:41:51 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << GREEN "Constructor Zombie" RESET << std::endl;
}

Zombie::~Zombie()
{
	std::cout << RED "Destructor Zombie: " << this->_name << RESET << std::endl;
}

void	Zombie::setName( std::string name )
{
	this->_name = name;
}

void	Zombie::announce( void )
{
	std::cout << PINK << this->_name << ": BraiiiiiiinnnzzzZ..." RESET << std::endl;
}