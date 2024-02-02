/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/02 15:24:21 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/02 15:30:01 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(/* args */)
{
}

Weapon::~Weapon()
{
	std::cout << RED "Destructor Weapon" RESET << std::endl;
}

std::string const & Weapon::getType() const
{
	return (this->_type);
}