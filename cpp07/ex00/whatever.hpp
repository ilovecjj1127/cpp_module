/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 12:06:39 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/08/12 11:43:18 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void swap(T &x, T &y)
{
	T	temp = x;
	
	x = y;
	y = temp;
}

template <typename T>
T min(T &x, T &y)
{
	return (x < y) ? x : y;
}

template <typename T>
T max(T &x, T &y)
{
	return (x > y) ? x : y;
}