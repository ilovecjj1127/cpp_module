/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/02 09:48:09 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/02 10:52:30 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie( std::string name )
{
	Zombie *zombie;

	zombie = new Zombie;
	zombie->setName(name);
	return (zombie);
}