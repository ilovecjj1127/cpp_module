/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/04 18:23:03 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/09 12:59:08 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), _target("")
{
	std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ): 
AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << target << " RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &cpy ):
AForm::AForm(cpy), _target(cpy._target)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=( const RobotomyRequestForm &cpy )
{
	if (this == &cpy)
		return (*this);
	AForm::operator=(cpy);
	this->_target = cpy._target;
	return (*this);
}

std::string	RobotomyRequestForm::getTarget( void ) const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute( const Bureaucrat &executor ) const
{
	AForm::execute(executor);
	
	std::cout << "NoiSessssssssssssssssssssssss....." << std::endl;
	
	srand(time(NULL));
	if (std::rand() % 2)
		std::cout << BLUE << _target << " was successfully robotomized!" RESET << std::endl;
	else
		std::cout << RED << _target << " failed its robotomy" RESET << std::endl;
}

AForm	*RobotomyRequestForm::makeForm( AForm *form, std::string type, std::string target )
{
	if (form == NULL && type == "robotomy request")
		return (new RobotomyRequestForm(target));
	return (form);
}

std::ostream	&operator<<( std::ostream &cout, const RobotomyRequestForm &form )
{
	cout << GREEN << form.getName() << " RobotomyRequestForm, target: " << form.getTarget();
	cout << ", signed: " << form.checkSigned() << ", sign grade: ";
	cout << form.getSignGrade() << ", exec grade: " << form.getExecGrade() << RESET;
	return (cout);
}