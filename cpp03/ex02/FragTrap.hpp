/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/16 12:05:21 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/16 12:11:49 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap( void );
	FragTrap( const std::string name );
	FragTrap( const FragTrap &fragtrap );
	~FragTrap( void );

	FragTrap	&operator=( const FragTrap &fragtrap );

	void	highFivesGuys( void );
};

#endif
