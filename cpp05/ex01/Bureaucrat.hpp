/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/27 12:25:41 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/09 15:46:20 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

#include "Color.hpp"

class Form;

class Bureaucrat
{
private:
	std::string	_name;
	int			_grade;

public:
	Bureaucrat();
	Bureaucrat( const std::string name, int grade );
	Bureaucrat( const Bureaucrat &cpy );
	~Bureaucrat();
	
	Bureaucrat			&operator=( const Bureaucrat &cpy );

	void				upGrade();
	void				downGrade();
	void				signForm( Form &form );
	
	const std::string	getName( void ) const;
	int					getGrade( void ) const;

	class	GradeTooHighException: public std::exception
	{
		public:
			virtual const char	*what( void ) const throw();
	};
	class	GradeTooLowException: public std::exception
	{
		public:
			virtual const char	*what( void ) const throw();
	};
};

std::ostream & operator << ( std::ostream &cout, const Bureaucrat &bureaucrat );

#endif