/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/26 10:28:26 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/26 12:21:23 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define PINK "\033[95m"
# define RESET "\033[0m"

# include <iostream>

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