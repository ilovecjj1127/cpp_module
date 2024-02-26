/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/26 10:49:48 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/26 16:10:06 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
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