/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Types.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/17 15:59:56 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/17 17:26:29 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Base
{
public:
	virtual ~Base(){};
};

class A: public Base{};
class B: public Base{};
class C: public Base{};

Base	*generate( void );
void	identify( Base *p );
void	identify( Base &p );

