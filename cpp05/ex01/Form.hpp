/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/03 11:24:41 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/04 14:53:32 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>

#include "Color.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_is_signed;
	const int			_grade_sign;
	const int			_grade_exec;

public:
	/* Constructors & Destructors */
	Form();
	Form( const std::string name, const int gradesign, const int gradeexe );
	Form( const Form &cpy );
	~Form();

	/* Operators */
	Form	&operator=( const Form &cpy );

	/* Member functions */
	void	beSigned( const Bureaucrat &bur );

	/* getter and setter*/
	const std::string	getName( void ) const;
	bool				checkSigned( void ) const;
	int					getExecGrade( void ) const;
	int					getSignGrade( void ) const;
	
	/* exceptions */
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

std::ostream &operator<<( std::ostream &cout, const Form &form );

#endif