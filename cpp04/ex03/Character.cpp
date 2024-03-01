/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:47:47 by jessie            #+#    #+#             */
/*   Updated: 2024/03/01 15:58:33 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name("")
{
	for (int i = 0; i < 4; i++)
		_materias[i] = nullptr;
	std::cout << "Character: default constructor called" << std::endl;
}

Character::Character( std::string name ): _name(name)
{
	for (int i = 0; i < 4; i++)
		_materias[i] = nullptr;
	std::cout << "Character: " << name << " constructor called" << std::endl;	
}

Character::Character( const Character &cpy )
{
	std::cout << "Character: Copy constructor called" << std::endl;
	*this = cpy;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete this->_materias[i];
	std::cout << "Character destructor called" << std::endl;
}

/* Is this deep copy????????? */
Character	&Character::operator=( const Character &cpy )
{
	if (this == &cpy)
		return (*this);
	this->_name = cpy.getName();
	for (int i = 0; i < 4; i++)
	{
		delete this->_materias[i];
		this->_materias[i] = cpy._materias[i]->clone();
	}
	return (*this);
}

const std::string	&Character::getName() const
{
	return (_name);
}

void	Character::equip( AMateria *m )
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] == nullptr)
		{
			_materias[i] = m;
			return ;	
		}
	}
	std::cout << RED "\nSorry! No slot for new Materia.\n" RESET << std::endl;
}

void	Character::unequip( int idx )
{
	if (idx < 4 && idx >= 0 && _materias[idx])
	{
		_materias[idx] = nullptr;
		std::cout << "----unequip " << idx <<"th materia----" << std::endl;
	}
}

void	Character::use( int idx, ICharacter &target )
{
	if (_materias[idx] == nullptr)
		return ;
	std::cout << "-----use " << idx <<"th materia----" << std::endl;
	_materias[idx]->use(target);
}