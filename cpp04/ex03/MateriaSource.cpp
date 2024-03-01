/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:21:04 by jessie            #+#    #+#             */
/*   Updated: 2024/03/01 22:36:38 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materias[i] = nullptr;
	std::cout << "MateriaSource: default constructor called" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource &cpy )
{
	std::cout << "MateriaSource: copy constructor called" << std::endl;
	*this = cpy;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _materias[i];
	std::cout << "MateriaSource: destructor called" << std::endl;

}

MateriaSource	&MateriaSource::operator=( const MateriaSource &cpy )
{
	if (this == &cpy)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		delete this->_materias[i];
		this->_materias[i] = cpy._materias[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria( AMateria *m )
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] == nullptr)
		{
			_materias[i] = m;
			return ;
		}
	}
	std::cout << RED "no Space for MateriaSource" RESET << std::endl;
}

AMateria	*MateriaSource::createMateria( const std::string &type )
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] && _materias[i]->getType() == type)
			return (_materias[i]->clone());
	}
	return (0);
}