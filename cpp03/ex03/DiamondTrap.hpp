/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/16 14:16:59 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/16 14:55:43 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string	_name;
public:
	DiamondTrap( void );
	DiamondTrap( const std::string name );
	DiamondTrap( const DiamondTrap &diamondtrap );
	~DiamondTrap( void );

	DiamondTrap	&operator=( const DiamondTrap &DiamondTrap );

	void	whoAmI( void );
	void	attack( const std::string &target );
};

#endif