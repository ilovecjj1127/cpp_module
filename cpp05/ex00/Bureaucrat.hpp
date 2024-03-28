/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/27 12:25:41 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/03/28 18:02:25 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_CPP

# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define PINK "\033[95m"
# define RESET "\033[0m"

# include <iostream>
# include <string>
# include <exception>

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
	
	const std::string	getName( void ) const;
	int					getGrade( void ) const;

	class	GradeTooHighException: public std::exception
	{
		public:
		
	};
	class	GradeTooLowException: public std::exception
	{
		public:
	};
};

std::ostream & operator << ( std::ostream &cout, const Bureaucrat &bureaucrat );

#endif