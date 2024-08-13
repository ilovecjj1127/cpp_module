/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 12:07:46 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/08/12 15:32:54 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>

template <typename T>
void	printValue(T &t)
{
	std::cout << t << " ";
}

void	sqr(int n)
{
	std::cout << n * n << " ";
}

int	main( void ) {
	int		intArr[5] = {5, 4, 3, 2, 1};
	float	floarArr[3] = {1.1f, 2.2f, 3.3f};
	char	str[] = "leave me alone";

	std::cout << "\nPrint int array: " << std::endl;
	iter(intArr, 5, &printValue<int>);
	
	std::cout << "\nSquare int array: " << std::endl;
	iter(intArr, 5, &sqr);

	std::cout << "\nPrint float array: " << std::endl;
	iter(floarArr, 3, &printValue<float>);
	
	std::cout << "\nPrint string: " << std::endl;
	iter(str, 14, &printValue<char>);
}