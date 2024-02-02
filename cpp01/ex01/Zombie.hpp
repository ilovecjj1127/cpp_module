/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/01 16:58:08 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/02 13:54:44 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"
#define PINK "\033[95m"
#define RESET "\033[0m"

#include <iostream>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie( void );
	~Zombie( void );
	
	void	announce( void );
	void	setName( std::string name );
};

Zombie	*zombieHorde( int N, std::string name );

#endif