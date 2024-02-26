/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/26 10:49:48 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/26 12:04:28 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
public:
	Dog( void );
	Dog( const Dog &cpy );
	~Dog( void );

	Dog	&operator=( const Dog &cpy );
	
	void	makeSound( void ) const;
};

#endif