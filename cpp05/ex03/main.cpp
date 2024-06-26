/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/03 10:15:20 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/09 13:03:34 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	AForm	*form;
	Intern	Newbie;
	
	form = NULL;
	std::cout << PINK "\n--Create all types of forms and form with incorrect type--" RESET << std::endl;
	{
		try
		{
			form = Newbie.makeForm("presidential pardon", "Adam");
			delete form;
			form = Newbie.makeForm("robotomy request", "Ben");
			delete form;
			form = Newbie.makeForm("shrubbery creation", "Homie");
			delete form;
			form = Newbie.makeForm("invalid form", "Wrong");
			delete form;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	std::cout << PINK "\n-----form functionality test-----" RESET << std::endl;
	Bureaucrat	Bob("Bob", 100);
	
	form = Newbie.makeForm("shrubbery creation", "Bender");
	std::cout << *form << std::endl;
	form->beSigned(Bob);
	form->execute(Bob);
	std::cout << *form << std::endl;
	delete form;
	return (0);
}