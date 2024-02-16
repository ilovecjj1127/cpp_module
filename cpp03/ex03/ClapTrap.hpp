/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/14 10:39:39 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/16 10:21:57 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define PINK "\033[95m"
# define RESET "\033[0m"

# include <iostream>

class ClapTrap
{
protected:
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

public:
	ClapTrap();
	ClapTrap( std::string name );
	ClapTrap( std::string name, int hit, int energy, int attack );
	ClapTrap( const ClapTrap &claptrap );
	~ClapTrap();
	
	ClapTrap	&operator=( const ClapTrap &claptrap );
	
	void		attack( const std::string &target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );
};

#endif