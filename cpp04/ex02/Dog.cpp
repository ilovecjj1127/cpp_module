/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:44:58 by jiajchen          #+#    #+#             */
/*   Updated: 2024/03/01 09:22:28 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ): AAnimal("Dog")
{
	this->_brain = new Brain();
	std::cout << BLUE "Dog: default constructor called" RESET << std::endl;
}

Dog::Dog( const Dog &cpy )
{
	std::cout << BLUE "Dog: copy constructor called" RESET << std::endl;
	*this = cpy;
}

Dog::~Dog( void )
{
	delete _brain;
	std::cout << BLUE "Dog: destructor called" RESET << std::endl;
}

Dog &Dog::operator=( const Dog &cpy )
{
	std::cout << BLUE "Dog: copy operator called" RESET << std::endl;
	if (this == &cpy)
		return (*this);
	this->_type = cpy._type;
	this->_brain = new Brain(*(cpy._brain));
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << BLUE "wooolf!" RESET << std::endl;
}

Brain	*Dog::getBrain( void ) const
{
	return (this->_brain);
}
