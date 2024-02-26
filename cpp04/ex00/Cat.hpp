/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/26 10:49:34 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/26 12:04:22 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
public:
	Cat( void );
	Cat( const Cat &cpy);
	~Cat( void );

	Cat	&operator=( const Cat &cpy );

	void	makeSound( void ) const;
};

#endif