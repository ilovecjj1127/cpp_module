/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/02 10:06:05 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/02 12:10:59 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump( std::string name )
{
	Zombie	r_zombie;
	
	r_zombie.setName(name);
	r_zombie.announce();
}