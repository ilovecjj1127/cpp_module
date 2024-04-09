/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/04 17:49:39 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/09 12:59:03 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137),
_target("")
{
	std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ):
AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << target << " ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &cpy ):
AForm::AForm(cpy), _target(cpy._target)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( const ShrubberyCreationForm &cpy )
{
	if (this == &cpy)
		return (*this);
	AForm::operator=(cpy);
	this->_target = cpy._target;
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget( void ) const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute( const Bureaucrat &executor ) const
{
	AForm::execute(executor);
	
	std::string	filename = _target + "_shrubbery";
	std::ofstream	outFile(filename); //initialization constructor std::ofstream::out is always set for writing
	if (!outFile.is_open())
	{
		std::cerr << RED "Failed to create file: " << filename << RESET << std::endl;
		return ;
	}
	outFile << TREE;
	outFile.close();
	
	std::cout << executor.getName() << " successfully created a shrubbery!" << std::endl;
}

AForm	*ShrubberyCreationForm::makeForm( AForm *form, std::string type, std::string target )
{
	if (form == NULL && type == "shrubbery creation")
		return (new ShrubberyCreationForm(target));
	return (form);
}

std::ostream	&operator<<( std::ostream &cout, const ShrubberyCreationForm &form )
{
	cout << GREEN << form.getName() << " ShrubberyCreationForm, target: " << form.getTarget();
	cout << ", signed: " << form.checkSigned() << ", sign grade: ";
	cout << form.getSignGrade() << ", exec grade: " << form.getExecGrade() << RESET;
	return (cout);
}