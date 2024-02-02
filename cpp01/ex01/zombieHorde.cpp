/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/02 12:38:00 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/02 13:59:49 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	Zombie	*zombiehorde;

	zombiehorde = new Zombie[N];
	for (int i = 0; i < N ;i++)
		zombiehorde[i].setName(name);
	return (zombiehorde);
}