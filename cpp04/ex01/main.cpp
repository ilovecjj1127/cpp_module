/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/26 10:29:24 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/26 17:34:23 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	Animal	*animals[4];
	
	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << PINK "\n---------------------------" RESET << std::endl;

	for (int i = 0; i < 4; i++)
	{
		std::cout << animals[i]->getType() << ": ";	
		animals[i]->makeSound();
	}
	std::cout << PINK "\n---------------------------" RESET << std::endl;
	for (int i = 0; i < 4; i++)
		delete animals[i];
	return (0);
}