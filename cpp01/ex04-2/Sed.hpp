/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/05 16:22:47 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/05 16:27:35 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>
# include <string>

class Sed
{
private:
	std::string	_file;
	std::string	_s1;
	std::string	_s2;
public:
	Sed(std::string file, std::string s1, std::string s2);
	~Sed();
	void	replaceFile();
};

#endif