/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:34:30 by jessie            #+#    #+#             */
/*   Updated: 2024/02/03 14:54:46 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/* a reference must be initialized at the point of declaration or in the member initializer list of the constructor.*/
HumanA::HumanA( std::string name, Weapon &weapon ): _weapon(weapon), _name(name)
{
	std::cout << GREEN "Constructor HumanA: " << _name << RESET << std::endl;
}

HumanA::~HumanA()
{
	std::cout << RED "Destructor HumanA: " << this->_name << RESET << std::endl;
}

void	HumanA::attack() const
{
	std::cout << YELLOW << this->_name << " attacks with their ";
	std::cout << this->_weapon.getType() << RESET << std::endl;
}
