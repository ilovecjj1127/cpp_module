/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/10 12:11:34 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/15 16:44:18 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/* not instantiable */
ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter( const ScalarConverter &cpy )
{
	*this = cpy;	
}

ScalarConverter::~ScalarConverter(){}

ScalarConverter	&ScalarConverter::operator=( const ScalarConverter &cpy )
{
	(void)cpy;
	return (*this);
}

bool	ScalarConverter::isChar( const std::string &input )
{
	if (input.length() == 1 && input[0])
		return 
}

bool	ScalarConverter::isInt( const std::string &input )
{
	return (false);
}

bool	ScalarConverter::isFloat( const std::string &input )
{
	if (input.back() == 'f')
	return (false);
}

bool	ScalarConverter::isDouble( const std::string &input )
{
	return (false);
}

char	ScalarConverter::convertChar( const std::string &input )
{
	
}

int	ScalarConverter::convertInt( const std::string &input )
{
	
}

float	ScalarConverter::convertFloat( const std::string &input )
{
	
}

double	ScalarConverter::convertDouble( const std::string &input )
{
	
}

/**
 * only the decimal notation be used (except for char)
 * 1. detect the type of the literal(ischar, isint, isfloat, isdouble)
 * 2. convert it from string to actual type (char, int, float, double)
 * 3. convert it explicitly (static_cast?) to the three other types
 * 4. display the results
*/
void	ScalarConverter::convert( const std::string &input )
{
	if (isChar(input)){
		char	c = convertChar(input);
	}
	else if (isInt(input)){
		int	i = convertInt(input);
	}
	else if (isFloat(input)){
		float	f = convertFloat(input);
	}
	else if (isDouble(input)){
		double	d = convertDouble(input);
	}
}