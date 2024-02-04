/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:20:27 by jiajchen          #+#    #+#             */
/*   Updated: 2024/02/03 14:35:20 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93;1m"
#define BLUE "\033[94m"
#define PINK "\033[95m"
#define RESET "\033[0m"

#include <iostream>

class Weapon
{
private:
	std::string _type;
public:
	Weapon();
	Weapon( std::string type );
	~Weapon();
	
	std::string const & getType() const;
	void	setType( std::string type );
};

#endif