/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:29:24 by jiajchen          #+#    #+#             */
/*   Updated: 2024/03/01 12:01:47 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	AAnimal	*animals[4];
	
	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << PINK "\n---------------------------" RESET << std::endl;
	
	Brain	*brain = animals[0]->getBrain();
	brain->setIdea("test test", 0);
	std::cout << "\nIdea of animals[0]: " << animals[0]->getBrain()->getIdea(0) << std::endl;
	
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