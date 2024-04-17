/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/17 14:03:11 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/17 15:45:31 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data		data; //memory allocated on the stack with default values
	Data		*anotherData;
	uintptr_t	ptr;

	std::cout << "Data:\t\t" << &data << std::endl;
	ptr = Serializer::serialize(&data);
	std::cout << "Serialize:\t" << std::hex << "0x" << ptr << std::endl;
	anotherData = Serializer::deserialize(ptr);
	std::cout << "Deserialize:\t" << anotherData << std::endl;
}