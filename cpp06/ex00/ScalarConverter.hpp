/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/10 10:50:20 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/15 15:06:35 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

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

	static char		convertChar( const std::string &input );
	static int		convertInt( const std::string &input );
	static float	convertFloat( const std::string &input );
	static double	convertDouble( const std::string &input );

public:
	static void	convert( const std::string &input );
};

