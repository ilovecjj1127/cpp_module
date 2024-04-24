/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/24 16:38:54 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/24 18:15:25 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T, typename F>
void	iter(T *arr, size_t len, F f)
{
	for (size_t i = 0; i < len; i++){
		f(arr[i]);
	}
}