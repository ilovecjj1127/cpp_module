/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:41:40 by jessie            #+#    #+#             */
/*   Updated: 2024/02/03 14:42:16 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
	this->_name = name;
	this->_weapon = nullptr;
	std::cout << GREEN "Constructor HumanB: " << name << RESET << std::endl;
}

HumanB::~HumanB()
{
	std::cout << RED "Destructor HumanB: " << this->_name << RESET << std::endl;
}

void	HumanB::attack() const
{
	std::cout << YELLOW << this->_name;
	if (this->_weapon)
		std::cout << " attacks with their "<< this->_weapon->getType() << RESET << std::endl;
	else
		std::cout << " has no weapon" RESET << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	this->_weapon = &weapon;
}
