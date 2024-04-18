/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/10 10:50:20 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/18 11:01:46 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip> //precision
#include <sstream>
#include <string>
#include <limits.h>
#include <float.h>

# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define PINK "\033[95m"
# define RESET "\033[0m"

class ScalarConverter
{
private:
	ScalarConverter();
	ScalarConverter( const ScalarConverter &cpy );
	~ScalarConverter();

	ScalarConverter	&operator=( const ScalarConverter &cpy );

	/* utility functions */
	static bool	isChar( const std::string &input );
	static bool	isInt( const std::string &input );
	static bool	isFloat( const std::string &input );
	static bool	isDouble( const std::string &input );

	static void	printChar( const std::string &input );
	static void	printInt( const std::string &input );
	static void	printFloat( const std::string &input );
	static void	printDouble( const std::string &input );
	static void	printPseudo( const std::string &input );

public:
	static void	convert( const std::string &input );

	class	TypeNotFoundException: public std::exception{
		virtual const char	*what( void ) const throw();
	};
};

