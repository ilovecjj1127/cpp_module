/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:49:48 by jiajchen          #+#    #+#             */
/*   Updated: 2024/03/01 09:22:25 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"

class Dog: public AAnimal
{
private:
	Brain	*_brain;

public:
	Dog( void );
	Dog( const Dog &cpy );
	~Dog( void );

	Dog	&operator=( const Dog &cpy );
	
	void	makeSound( void ) const;
	Brain	*getBrain( void ) const;
};

#endif