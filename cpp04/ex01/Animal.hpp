/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/26 10:28:26 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/26 17:25:42 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
protected:
	std::string	_type;

public:
	Animal( void );
	Animal( const std::string type );
	Animal( const Animal &cpy );
	virtual ~Animal( void );

	Animal &operator=( const Animal &cpy );

	virtual void	makeSound( void ) const;
	std::string		getType( void ) const;
};


#endif