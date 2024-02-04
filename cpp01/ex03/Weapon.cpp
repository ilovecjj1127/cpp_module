/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:24:21 by jiajchen          #+#    #+#             */
/*   Updated: 2024/02/03 15:05:39 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon( std::string type )
{
	this->_type = type;
	std::cout << GREEN "Constructor Weapon type: " << type << RESET << std::endl;
}

Weapon::~Weapon()
{
	std::cout << RED "Destructor Weapon type: " << _type << RESET << std::endl;
}

std::string const & Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType( std::string type )
{
	this->_type = type;
}