/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/01 16:58:08 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/01 17:00:23 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie(/* args */);
	~Zombie();
	
	void	announce( void );
};

Zombie::Zombie(/* args */)
{
}

Zombie::~Zombie()
{
}

#endif