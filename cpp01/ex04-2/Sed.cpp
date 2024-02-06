/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/05 16:21:57 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/05 17:42:17 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string file, std::string s1, std::string s2)
{
	this->_file = file;
	this->_s1 = s1;
	this->_s2 = s2;
}

Sed::~Sed()
{
}

void	replace_line(std::ofstream &ofs, std::string &line, std::string &s1, std::string &s2)
{
	std::size_t	found;
	
	while ((found = line.find(s1)) != std::string::npos)
	{
		line.erase(found, s1.length());
		line.insert(found, s2);
	}
	ofs << line << std::endl;
}

void	Sed::replaceFile()
{
	std::ifstream	ifs(_file.c_str());
	if (!ifs.is_open())
		return ;

	std::string		out(_file + ".replace");
	std::ofstream	ofs(out.c_str());
	
	std::string		line;

	while (std::getline(ifs, line))
		replace_line(ofs, line, _s1, _s2);
	ofs.close();
	ifs.close();
}