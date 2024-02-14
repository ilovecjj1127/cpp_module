/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/14 10:39:33 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/14 12:41:24 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	trapper("trapper");
	ClapTrap	clapper("clapper");
	
	trapper.attack("clapper");
	clapper.takeDamage(5);
	clapper.beRepaired(20);
}