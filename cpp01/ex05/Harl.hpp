/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/05 14:20:45 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/06 10:10:37 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93;1m"
#define BLUE "\033[94m"
#define PINK "\033[95m"
#define RESET "\033[0m"

#include <iostream>

class Harl
{
private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
	
public:
	Harl(/* args */);
	~Harl();
	void	complain( std::string level );
	
};




#endif