/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/02 09:34:57 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/02 12:35:12 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;

	std::cout << "<------ Zombie Foo with randomChump ------>" << std::endl;
	randomChump("Foo");
	std::cout << "\n\n";

	std::cout << "<------ Zombie Bar with newZombie ------>" << std::endl;
	zombie = newZombie("Bar");
	zombie->announce();
	delete zombie;
	return (0);
}