/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:55:23 by jiajchen          #+#    #+#             */
/*   Updated: 2024/03/01 09:52:34 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << GREEN "Brain: default constructor called" RESET << std::endl;
}

Brain::Brain( const Brain &cpy )
{
	*this = cpy;
	std::cout << GREEN "Brain: copy constructor called" RESET << std::endl;
}

Brain	&Brain::operator=( const Brain &cpy )
{
	std::cout << GREEN "Brain: copy operator called" RESET << std::endl;
	if (this == &cpy)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = cpy._ideas[i];
	return (*this);
}

Brain::~Brain( void )
{
	std::cout << GREEN "Brain: destructor called" RESET << std::endl;
}

void	Brain::setIdea( std::string idea, int i )
{
	this->_ideas[i] = idea;
}

std::string	Brain::getIdea( int i ) const
{
	return (_ideas[i]);
}

