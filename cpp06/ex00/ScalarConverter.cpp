/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/10 12:11:34 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/18 11:01:36 by jiajchen      ########   odam.nl         */
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

/* utility functions */
bool	ScalarConverter::isChar( const std::string &input )
{
	if (input.length() == 3 && input[0] == '\'' && input[2] == '\'')
		return (true);
	return (false);
}

bool	ScalarConverter::isInt( const std::string &input )
{
	size_t	i = 0;
	
	if (input[i] == '+' || input[i] == '-')
		i++;
	while (i < input.length())
	{
		if (!isdigit(input[i]))
			return (false);
		i++;
	}
	return (true);
}

static bool	isValidDouble(const std::string &input, size_t len)
{
	size_t	i = 0;
	bool	dotFlag = true;

	if (input[i] == '+' || input[i] == '-')
		i++;
	while (i < len)
	{
		if (dotFlag && input[i] == '.')
			dotFlag = false;
		else if (!isdigit(input[i]) || input[i] == '.')
			return (false);
		i++;
	}
	return (true);
}

bool	ScalarConverter::isFloat( const std::string &input )
{
	if (input.empty() || input.back() != 'f')
		return (false);
	return (isValidDouble(input, input.length() - 1));
}

bool	ScalarConverter::isDouble( const std::string &input )
{
	return (isValidDouble(input, input.length()));
}

void	ScalarConverter::printChar( const std::string &input )
{
	int	c = input[1];
	
	if (c < 0 || c > 127)
		std::cout << "char: impossible" << std::endl;
	else if (c < 32 || c == 127)
		std::cout << "char: non displable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
	std::cout << "int: " << c << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	ScalarConverter::printInt( const std::string &input )
{
	std::istringstream	iss(input);
	long	i;
	
	iss >> i;
	if (i < 0 || i > 127)
		std::cout << "char: impossible" << std::endl;
	else if (i < 32 || i == 127)
		std::cout << "char: non displable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	
	if (i > INT_MAX || i < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void	ScalarConverter::printFloat( const std::string &input )
{
	std::istringstream	iss(input);
	float	f;
	
	iss >> f;
	int	i = static_cast<int>(f);
	if (i < 0 || i > 127)
		std::cout << "char: impossible" << std::endl;
	else if (i < 32 || i == 127)
		std::cout << "char: non displable" << std::endl;
	else	
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	
	if (f > static_cast<float>(INT_MAX) || f < static_cast<float>(INT_MIN))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void	ScalarConverter::printDouble( const std::string &input )
{
	std::istringstream	iss(input);
	double	d;
	
	iss >> d;
	int	i = static_cast<int>(d);
	if (i < 0 || i > 127)
		std::cout << "char: impossible" << std::endl;
	else if (i < 32 || i == 127)
		std::cout << "char: non displable" << std::endl;
	else	
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	
	if (d > static_cast<double>(INT_MAX) || d < static_cast<double>(INT_MIN))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	
	std::cout << std::fixed << std::setprecision(1);
	if (d > static_cast<double>(FLT_MAX) || d < -static_cast<double>(FLT_MAX) || 
		(d > -static_cast<double>(FLT_MIN) && d < static_cast<double>(FLT_MIN)))		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	
	std::cout << "double: " << d << std::endl;
}

void	ScalarConverter::printPseudo( const std::string &input )
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	
	if (input == "nan" || input == "nanf")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (input == "+inff" || input == "+inf")
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (input == "-inff" || input == "-inf")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
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
	if (isChar(input))
		printChar(input);
	else if (isInt(input))
		printInt(input);
	else if (isFloat(input))
		printFloat(input);
	else if (isDouble(input))
		printDouble(input);
	else if (input == "-inff" || input == "+inff" || input == "nanf" ||
			input == "-inf" || input == "+inf" || input == "nan")
		printPseudo(input);
	else
		throw (ScalarConverter::TypeNotFoundException());
}

const char	*ScalarConverter::TypeNotFoundException::what( void ) const throw()
{
	return (RED "Type not Found" RESET);
}