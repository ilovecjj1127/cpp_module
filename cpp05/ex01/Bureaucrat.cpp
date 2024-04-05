/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/28 12:05:25 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/04 15:08:42 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(): _name(""), _grade(150)
{
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( const std::string name, int grade ): _name(name), _grade(grade)
{
	if (_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
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
		throw (Bureaucrat::GradeTooHighException());
}

void	Bureaucrat::downGrade()
{
	this->_grade++;
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

void	Bureaucrat::signForm( Form &form )
{
	try
	{
		form.beSigned(*this);
		std::cout << YELLOW << this->_name << " signed " << form.getName() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << this->_name << " couldn't sign " << form.getName();
		std::cerr << " because " << e.what() << RESET << std::endl;
	}
}

const char	*Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return (RED "Bureaucrat: Grade is too High!" RESET);
}

const char	*Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return (RED "Bureaucrat: Grade is too Low!" RESET);
}

std::ostream	&operator<<( std::ostream &cout, const Bureaucrat &bureaucrat )
{
	cout << GREEN << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << RESET;
	return (cout);
}