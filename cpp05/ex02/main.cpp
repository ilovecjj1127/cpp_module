/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/03 10:15:20 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/05 17:06:24 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	std::cout << PINK "\n--Create three forms and Bureaucrats--" RESET << std::endl;
	ShrubberyCreationForm	shrubbery("Home");
	RobotomyRequestForm		robotomy("noisy");
	PresidentialPardonForm	president("zaphod beeblebrox");
	Bureaucrat				Adam("Adam", 150);
	Bureaucrat				Bob("Bob", 3);
	Bureaucrat				Trump("Trump", 150);
	
	
	std::cout << PINK "\n--Throw exceptions when constructing a form with the grades out of boundary--" RESET << std::endl;
	{
		try
		{
			Form	testForm("testForm", 0, 100);
			std::cout << testForm << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	std::cout << PINK "\n--Create a Form correctly--" RESET << std::endl;
	{
		try
		{
			Bureaucrat	Adam("Adam", 80);
			Form		formA("A", 100, 20);
			std::cout << Adam << std::endl;
			std::cout << formA << std::endl;
			
			Adam.signForm(formA);
			std::cout << formA << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << PINK "\n--throw exception when signing failed--" RESET << std::endl;
	{
		try
		{
			Bureaucrat	Bob("Bob", 100);
			Form		formB("B", 50, 20);
			std::cout << Bob << std::endl;
			std::cout << formB << std::endl;
			
			Bob.signForm(formB);
			std::cout << formB << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}