/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/04 15:56:49 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/04/08 14:25:47 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include "AForm.hpp"
#include <fstream>

#define TREE \
"      /\\      \n" \
"     /\\*\\     \n" \
"    /\\O\\*\\    \n" \
"   /*/\\/\\/\\   \n" \
"  /\\O\\/\\*\\/\\  \n" \
" /\\*\\/\\*\\/\\/\\ \n" \
"/\\O\\/\\/*/\\/O/\\ \n" \
"      ||      \n" \
"      ||      \n" \
"      ||      \n"

class Bureaucrat;

class ShrubberyCreationForm: public AForm
{
private:
	std::string	_target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm( std::string	target );
	ShrubberyCreationForm( const ShrubberyCreationForm &cpy );
	~ShrubberyCreationForm();

	ShrubberyCreationForm	&operator=( const ShrubberyCreationForm &cpy );

	std::string	getTarget( void ) const;
	void		execute( const Bureaucrat &executor ) const;
};

std::ostream	&operator<<( std::ostream &cout, const ShrubberyCreationForm &form );

