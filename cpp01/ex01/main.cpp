/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/02 12:37:39 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/02 14:04:34 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombies;
	int		n;
	
	n = 5;
	zombies = zombieHorde(n, "Crazy");
	std::cout << "\n\n";
	std::cout << n << " Zombie Crazy " << "are coming..." << std::endl;
	for (int i = 0; i < n; i++)
		zombies[i].announce();
	std::cout << "\n\n";
	delete[] zombies;
	return (0);
}