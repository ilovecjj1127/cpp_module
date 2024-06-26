/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/03 10:15:20 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/03 11:18:15 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << PINK "\n--throw exception when calling constructor with grade too high--" RESET << std::endl;
	{
		try
		{
			Bureaucrat	Adam("Adam", 0);
			std::cout << Adam << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	std::cout << PINK "\n--throw exception when calling constructor with grade too low--" RESET << std::endl;
	{
		try
		{
			Bureaucrat	Adam("Adam", 151);
			std::cout << Adam << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << PINK "\n--throw exception when calling upGrade--" RESET << std::endl;
	{
		try
		{
			Bureaucrat	Bob("Bob", 2);
			std::cout << Bob << std::endl;
			Bob.upGrade();
			std::cout << Bob << std::endl;
			Bob.upGrade();
			std::cout << Bob << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << PINK "\n--throw exception when calling downGrade--" RESET << std::endl;
	{
		try
		{
			Bureaucrat	Bob("Bob", 148);
			std::cout << Bob << std::endl;
			Bob.downGrade();
			std::cout << Bob << std::endl;
			Bob.downGrade();
			std::cout << Bob << std::endl;
			Bob.downGrade();
			std::cout << Bob << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}