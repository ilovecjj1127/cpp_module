/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/14 10:39:33 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/16 14:07:57 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	clap("clap");
	std::cout << "\n";
	ScavTrap	scav("scav");
	std::cout << "\n";
	FragTrap	frag("frag");
	
	std::cout << PINK "\n----Scav attacks Frag----" RESET << std::endl;
	scav.attack("frag");
	frag.takeDamage(20);
	
	std::cout << PINK "\n----Clap attacks Frag----" RESET << std::endl;
	clap.attack("frag");
	frag.takeDamage(10);
	frag.beRepaired(10);

	std::cout << "\n";
	frag.highFivesGuys();

	std::cout << "\n";
}