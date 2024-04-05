/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/03 11:24:28 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/04 15:11:06 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): _name(""), _is_signed(false), _grade_sign(0), _grade_exec(0)
{
	std::cout << "Default Form constructor called" << std::endl;
}

Form::Form( const std::string name, const int gradesign, const int gradeexe ):
_name(name), _is_signed(false), _grade_sign(gradesign), _grade_exec(gradeexe)
{
	if (gradesign < 1 || gradeexe < 1)
		throw (Form::GradeTooHighException());
	else if (gradesign > 150 || gradeexe > 150)
		throw (Form::GradeTooLowException());
	std::cout << "Constructor Form: " << _name << " with signgrade: ";
	std::cout << gradesign << " exec grade: " << gradeexe << std::endl;
}

Form::Form( const Form &cpy ): _name(cpy._name), _is_signed(cpy._is_signed), _grade_sign(cpy._grade_sign),
_grade_exec(cpy._grade_exec)
{
	std::cout << "Copy constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Default Form destructor called" << std::endl;
}

Form	&Form::operator=( const Form &cpy )
{
	if (this == &cpy)
		return (*this);
	this->_is_signed = cpy._is_signed;
	return (*this);
}

/* member function */
void	Form::beSigned( const Bureaucrat &bur )
{
	if (bur.getGrade() <= this->_grade_sign)
	{
		this->_is_signed = true;
		std::cout << YELLOW"Form Message: " << bur.getName() << " successfully signed " << this->_name << RESET << std::endl;
	}
	else
		throw (Form::GradeTooLowException());
}

/* getters and setters */
const std::string	Form::getName( void ) const
{
	return (this->_name);
}

bool	Form::checkSigned( void ) const
{
	return (this->_is_signed);
}

int	Form::getExecGrade( void ) const
{
	return (this->_grade_exec);
}

int	Form::getSignGrade( void ) const
{
	return (this->_grade_sign);
}

/* exceptions */
const char	*Form::GradeTooHighException::what( void ) const throw()
{
	return (RED "Form: Grade is too High!" RESET);
}

const char	*Form::GradeTooLowException::what( void ) const throw()
{
	return (RED "Form: Grade is too Low!" RESET);
}

std::ostream	&operator<<( std::ostream &cout, const Form &form )
{
	cout << GREEN << form.getName() << " form, signed: " << form.checkSigned() << ", sign grade: ";
	cout << form.getSignGrade() << ", exec grade: " << form.getExecGrade() << RESET;
	return (cout);
}