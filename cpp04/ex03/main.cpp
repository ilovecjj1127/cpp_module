/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jessie <jessie@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/01 10:47:13 by jessie        #+#    #+#                 */
/*   Updated: 2024/03/05 14:45:13 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	std::cout << PINK "\n----Make ice and cure and store them in the source----" RESET << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	std::cout << PINK "\n----Make character----" RESET << std::endl;
	ICharacter* me = new Character("me");
	
	std::cout << PINK "\n----Get materia from source and equip me----" RESET << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	std::cout << PINK "\n----Me will use the materia to bob----" RESET << std::endl;
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	
	std::cout << PINK "\n----destroy source: bob: me:----" RESET << std::endl;
	delete bob;
	delete me;
	delete src;
	
	return 0;
}