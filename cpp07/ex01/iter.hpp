/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/24 16:38:54 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/08/12 12:07:32 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T, typename F>
void	iter(T *arr, size_t len, F f)
{
	for (size_t i = 0; i < len; i++){
		if (arr[i])
			f(arr[i]);
		else{
			std::cout << "lenth is not available" << std::endl;
			return ;
		}
	}
}