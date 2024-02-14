/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/14 12:43:02 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/14 17:36:29 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap( void );
	ScavTrap( const std::string name );
	ScavTrap( const ScavTrap &scavtrap );
	~ScavTrap( void );

	ScavTrap	&operator=( const ScavTrap &scavtrap );

	void	guardGate();
};



#endif