/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/26 10:49:04 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/26 12:42:39 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
	WrongCat( void );
	WrongCat( const WrongCat &cpy);
	~WrongCat( void );

	WrongCat	&operator=( const WrongCat &cpy );

	void	makeSound( void ) const;
};

#endif