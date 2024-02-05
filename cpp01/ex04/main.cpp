/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jessie <jessie@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 15:08:07 by jessie        #+#    #+#                 */
/*   Updated: 2024/02/05 16:19:42 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	error(const std::string &str)
{
	std::cerr << str << std::endl;
	return (1);
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

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (error("incorrect arguments"));

	std::string	in(argv[1]);
	std::string	out(in + ".replace");
	std::string	s1(argv[2]);
	std::string	s2(argv[3]);
	std::string	line;
	
	std::ifstream	ifs(in.c_str());
	if (!ifs.is_open())
		return (error("inflie open error"));
	
	std::ofstream	ofs(out.c_str());
	if (!ofs.is_open())
	{
		ifs.close();
		return (error("outflie open error"));
	}

	while (std::getline(ifs, line))
	{
		if (ifs.eof() || ifs.fail())
			break ;
		replace_line(ofs, line, s1, s2);
	}

	ofs.close();
	ifs.close();
	std::cout << "Replacement complete. Output written to " << out << std::endl;
	return (0);
}