/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/28 12:05:25 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/03 12:52:51 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name(""), _grade(150)
{
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( const std::string name, int grade ): _name(name), _grade(grade)
{
	if (_grade < 1)
		throw (GradeTooHighException());
	else if (_grade > 150)
		throw (GradeTooLowException());
	std::cout << "Constructor Bureaucrat: " << _name << " with grade: " << _grade << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat &cpy )
{
	*this = cpy;
	std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Bureaucrat: " << _name << std::endl;
}

Bureaucrat	&Bureaucrat::operator=( const Bureaucrat &cpy )
{
	if (this == &cpy)
		return (*this);
	this->_grade = cpy._grade;
	this->_name = cpy._name;
	return (*this);
}

const std::string	Bureaucrat::getName( void ) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

void	Bureaucrat::upGrade()
{
	this->_grade--;
	if (this->_grade < 1)
		throw (GradeTooHighException());
}

void	Bureaucrat::downGrade()
{
	this->_grade++;
	if (this->_grade > 150)
		throw (GradeTooLowException());
}

const char	*Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return (RED "Grade is too High!" RESET);
}

const char	*Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return (RED "Grade is too Low!" RESET);
}

std::ostream	&operator<<( std::ostream &cout, const Bureaucrat &bureaucrat )
{
	cout << GREEN << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << RESET;
	return (cout);
}