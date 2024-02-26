/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/26 10:43:12 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/26 12:49:11 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define PINK "\033[95m"
# define RESET "\033[0m"

# include <iostream>

class WrongAnimal
{
protected:
	std::string	_type;

public:
	WrongAnimal( void );
	WrongAnimal( const std::string type );
	WrongAnimal( const WrongAnimal &cpy );
	virtual ~WrongAnimal( void );

	WrongAnimal &operator=( const WrongAnimal &cpy );

	void	makeSound( void ) const;
	std::string		getType( void ) const;
};

#endif