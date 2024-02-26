/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/26 13:35:58 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/26 15:16:48 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define PINK "\033[95m"
# define RESET "\033[0m"

# include <iostream>

class Brain
{
private:
	std::string	_ideas[100];

public:
	Brain( void );
	Brain( const Brain &cpy );
	~Brain( void );

	Brain	&operator=( const Brain &cpy );
};




#endif