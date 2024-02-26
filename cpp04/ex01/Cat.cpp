/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/26 10:48:14 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/26 16:12:38 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat( void ): Animal("Cat")
{
	this->_brain = new Brain();
	std::cout << YELLOW "Cat: default constructor called" RESET << std::endl;
}

Cat::Cat( const Cat &cpy )
{
	std::cout << YELLOW "Cat: copy constructor called" RESET << std::endl;
	*this = cpy;
}

Cat::~Cat( void )
{
	delete _brain;
	std::cout << YELLOW "Cat: destructor called" RESET << std::endl;
}

Cat &Cat::operator=( const Cat &cpy )
{
	std::cout << YELLOW "Cat: copy operator called" RESET << std::endl;
	if (this == &cpy)
		return (*this);
	this->_type = cpy._type;
	this->_brain = new Brain(*(cpy._brain));
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << YELLOW "meeoww!" RESET << std::endl;
}

Brain	*Cat::getBrain( void ) const
{
	return (this->_brain);
}