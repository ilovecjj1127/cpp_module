/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/14 10:39:33 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/16 14:07:54 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	clap("clap");
	std::cout << "\n";
	ScavTrap	scav("scav");

	std::cout << "\n";
	ScavTrap	scav2 = scav;
	
	std::cout << PINK "\n----Scav attacks Scav----" RESET << std::endl;
	scav.attack("scav2");
	scav2.takeDamage(20);
	
	std::cout << PINK "\n----Clap attacks Scav----" RESET << std::endl;
	clap.attack("scav");
	scav.takeDamage(10);
	scav.beRepaired(10);

	std::cout << "\n";
	scav.guardGate();
	clap.attack("scav");

	std::cout << "\n";
}