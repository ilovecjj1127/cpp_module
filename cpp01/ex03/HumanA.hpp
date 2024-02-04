/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:29:56 by jessie            #+#    #+#             */
/*   Updated: 2024/02/03 14:38:54 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA( std::string name, Weapon &weapon );
	~HumanA();
	
	void	attack() const;

private:
	Weapon		&_weapon;
	std::string	_name;
};

#endif