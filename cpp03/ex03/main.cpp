/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/14 10:39:33 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/16 15:04:11 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	ScavTrap	scav("scav");
	std::cout << "\n";
	FragTrap	frag("frag");
	std::cout << "\n";
	DiamondTrap	diamond("diamond");

	std::cout << "\n";
	diamond.whoAmI();
	
	std::cout << PINK "\n----diamond attacks scav----" RESET << std::endl;
	diamond.attack("scav");
	scav.takeDamage(30);
	
	std::cout << PINK "\n----diamond attacks frag----" RESET << std::endl;
	diamond.attack("frag");
	frag.takeDamage(30);

	std::cout << PINK "\n----scav attacks diamond----" RESET << std::endl;
	frag.attack("diamond");
	diamond.takeDamage(30);
	diamond.beRepaired(10);

	std::cout << PINK "\n----Diamond inherits functions from scav and frag----" RESET << std::endl;
	diamond.guardGate();
	diamond.highFivesGuys();

	std::cout << "\n";
}