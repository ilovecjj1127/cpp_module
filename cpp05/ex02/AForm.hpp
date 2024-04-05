/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/03 11:24:41 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/05 17:35:41 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

#include <iostream>
#include <string>

#include "Color.hpp"

class Bureaucrat;

class AForm
{
private:
	std::string	_name;
	bool		_is_signed;
	int			_grade_sign;
	int			_grade_exec;

public:
	/* Constructors & Destructors */
	AForm();
	AForm( const std::string name, const int gradesign, const int gradeexe );
	AForm( const AForm &cpy );
	~AForm();

	/* Operators */
	AForm	&operator=( const AForm &cpy );

	/* Member functions */
	void			beSigned( const Bureaucrat &bur );
	virtual void	execute( const Bureaucrat &executor ) const;

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
	class	FormNotSignedException: public std::exception
	{
		public:
			virtual const char	*what( void ) const throw();
	}
};

std::ostream &operator<<( std::ostream &cout, const AForm &form );

#endif