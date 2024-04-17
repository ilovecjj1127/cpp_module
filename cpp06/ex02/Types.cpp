/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Types.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/17 16:04:24 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/17 17:53:02 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Types.hpp"
#include <iostream>
#include <cstdlib>

Base	*generate( void )
{
	std::srand(time(NULL));
	int	i = std::rand() % 3;
	
	switch (i)
	{
	case 0:
		std::cout << "Instantiates A" << std::endl;
		return (new A());
	case 1:
		std::cout << "Instantiates B" << std::endl;
		return (new B());
	case 2:
		std::cout << "Instantiates C" << std::endl;
		return (new C());
	default:
		return (nullptr);
	}
}

void	identify( Base *p )
{
	if (dynamic_cast<A*>(p))
		std::cout << "Object is of Type 'A'" << std::endl;
	else if(dynamic_cast<B*>(p))
		std::cout << "Object is of Type 'B'" << std::endl;
	else if(dynamic_cast<C*>(p))
		std::cout << "Object is of Type 'C'" << std::endl;
	else
		std::cout << "None of Type 'A', 'B', 'C'" << std::endl;
}

void	identify( Base &p )
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Reference is of Type 'A'" << std::endl;
		return ;
	}
	catch( std::bad_cast &bc )
	{
		(void) bc;
	}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "Reference is of Type 'B'" << std::endl;
		return ;
	}
	catch( std::bad_cast &bc )
	{
		(void) bc;
	}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "Reference is of Type 'C'" << std::endl;
		return ;
	}
	catch( std::bad_cast &bc )
	{
		(void) bc;
	}
	std::cout << "None of Type 'A', 'B', 'C'" << std::endl;
}