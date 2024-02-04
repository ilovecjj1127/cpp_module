/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:42:55 by jessie            #+#    #+#             */
/*   Updated: 2024/02/03 14:25:43 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB( std::string name );
	~HumanB();

	void	attack() const;
	void	setWeapon( Weapon &weapon );

private:
	Weapon		*_weapon;
	std::string _name;
};

#endif