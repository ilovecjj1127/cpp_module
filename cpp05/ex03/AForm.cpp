/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/03 11:24:28 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/09 13:04:05 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

AForm::AForm(): _name(""), _is_signed(false), _grade_sign(0), _grade_exec(0)
{
	std::cout << "Default AForm constructor called" << std::endl;
}

AForm::AForm( const std::string name, const int gradesign, const int gradeexe ):
_name(name), _is_signed(false), _grade_sign(gradesign), _grade_exec(gradeexe)
{
	if (gradesign < 1 || gradeexe < 1)
		throw (AForm::GradeTooHighException());
	else if (gradesign > 150 || gradeexe > 150)
		throw (AForm::GradeTooLowException());
	std::cout << "Constructor AForm: " << _name << " with signgrade: ";
	std::cout << gradesign << " exec grade: " << gradeexe << std::endl;
}

AForm::AForm( const AForm &cpy ): _name(cpy._name), _is_signed(cpy._is_signed), _grade_sign(cpy._grade_sign),
_grade_exec(cpy._grade_exec)
{
	std::cout << "Copy constructor called" << std::endl;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

AForm	&AForm::operator=( const AForm &cpy )
{
	if (this == &cpy)
		return (*this);
	this->_is_signed = cpy._is_signed;
	this->_name = cpy._name;
	this->_grade_exec = cpy._grade_exec;
	this->_grade_sign = cpy._grade_sign;
	return (*this);
}

/* member function */
void	AForm::beSigned( const Bureaucrat &bur )
{
	if (bur.getGrade() <= this->_grade_sign)
	{
		this->_is_signed = true;
		std::cout << YELLOW"Form Message: " << bur.getName() << " successfully signed " << this->_name << RESET << std::endl;
	}
	else
		throw (AForm::GradeTooLowException());
}

void	AForm::execute( const Bureaucrat &executor ) const
{
	if (this->_is_signed == false)
		throw (AForm::FormNotSignedException());
	else if (executor.getGrade() > this->_grade_exec)
		throw (AForm::GradeTooLowException());
}

AForm	*AForm::makeForm( std::string type, std::string target )
{
	AForm	*form;

	form = NULL;
	form = PresidentialPardonForm::makeForm(form, type, target);
	form = RobotomyRequestForm::makeForm(form, type, target);
	form = ShrubberyCreationForm::makeForm(form, type, target);
	return (form);
}

/* getters and setters */
const std::string	AForm::getName( void ) const
{
	return (this->_name);
}

bool	AForm::checkSigned( void ) const
{
	return (this->_is_signed);
}

int	AForm::getExecGrade( void ) const
{
	return (this->_grade_exec);
}

int	AForm::getSignGrade( void ) const
{
	return (this->_grade_sign);
}

/* exceptions */
const char	*AForm::GradeTooHighException::what( void ) const throw()
{
	return (RED "Form: Grade is too High!" RESET);
}

const char	*AForm::GradeTooLowException::what( void ) const throw()
{
	return (RED "Form: Grade is too Low!" RESET);
}

const char	*AForm::FormNotSignedException::what( void ) const throw()
{
	return (RED "Form has not been signed!" RESET);
}

std::ostream	&operator<<( std::ostream &cout, const AForm &form )
{
	cout << GREEN << form.getName() << " AForm, signed: " << form.checkSigned() << ", sign grade: ";
	cout << form.getSignGrade() << ", exec grade: " << form.getExecGrade() << RESET;
	return (cout);
}