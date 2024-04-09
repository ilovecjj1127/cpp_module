/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/04 18:17:31 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/09 15:48:25 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(): 
AForm("PresidentialPardonForm", 25, 5), _target("")
{
	std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target): 
AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << target << " PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &cpy ):
AForm::AForm(cpy), _target(cpy._target)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=( const PresidentialPardonForm &cpy )
{
	if (this == &cpy)
		return (*this);
	AForm::operator=(cpy);
	this->_target = cpy._target;
	return (*this);
}

std::string	PresidentialPardonForm::getTarget( void ) const
{
	return (this->_target);
}

void	PresidentialPardonForm::execute( const Bureaucrat &executor ) const
{
	AForm::execute(executor);
	
	std::cout << BLUE << _target << " has been pardoned by Zaphod Beeblebrox." RESET << std::endl;
}

std::ostream	&operator<<( std::ostream &cout, const PresidentialPardonForm &form )
{
	cout << GREEN << form.getName() << " PresidentialPardonForm, target: " << form.getTarget();
	cout << ", signed: " << form.checkSigned() << ", sign grade: ";
	cout << form.getSignGrade() << ", exec grade: " << form.getExecGrade() << RESET;
	return (cout);
}