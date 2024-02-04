/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:08:07 by jessie            #+#    #+#             */
/*   Updated: 2024/02/03 16:40:24 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	std::string	in = argv[1];
	std::string out = in.append(".replace");
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	
	std::ifstream	ifs(in);
	if (!ifs.is_open())
		return (1);
	if (std::getline(ifs, line))


	
	std::ofstream	ofs(out);
	
}