/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/02 15:20:27 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/02 15:29:58 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"
#define PINK "\033[95m"
#define RESET "\033[0m"

#include <iostream>

class Weapon
{
private:
	std::string _type;
public:
	Weapon(/* args */);
	~Weapon();
	
	std::string const & getType() const;
};




#endif