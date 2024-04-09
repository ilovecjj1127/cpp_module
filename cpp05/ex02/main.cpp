/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/03 10:15:20 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/08 14:08:22 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	std::cout << PINK "\n--Create three Forms and Bureaucrats--" RESET << std::endl;
	ShrubberyCreationForm	shrubbery("Home");
	RobotomyRequestForm		robotomy("Human");
	PresidentialPardonForm	pardon("Assistant");
	Bureaucrat				Adam("Adam", 150);
	Bureaucrat				Bob("Bob", 3);
	Bureaucrat				Carol("Carol", 50);
	
	
	std::cout << PINK "\n--Throw exceptions when executing without being signed--" RESET << std::endl;
	{
		try
		{
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			std::cout << pardon << std::endl;
			std::cout << Adam << std::endl;
			Adam.executeForm(shrubbery);
			Adam.executeForm(robotomy);
			Adam.executeForm(pardon);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	std::cout << PINK "\n--Sign the form and Execute without enough grade--" RESET << std::endl;
	{
		try
		{
			shrubbery.beSigned(Bob);
			std::cout << shrubbery << std::endl;
			shrubbery.execute(Adam);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << PINK "\n--Sign forms and execute them--" RESET << std::endl;
	{
		try
		{
			robotomy.beSigned(Carol);
			pardon.beSigned(Bob);
			std::cout << robotomy << std::endl;
			std::cout << pardon << std::endl;
			
			std::cout << "\n ----------create a shrubbery---------- \n";
			shrubbery.execute(Carol);
			std::cout << "\n ----------robotomy request---------- \n";
			robotomy.execute(Bob);
			std::cout << "\n ----------presidential pardon---------- \n";
			pardon.execute(Bob);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}