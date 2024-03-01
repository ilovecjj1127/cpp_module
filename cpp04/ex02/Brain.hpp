/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:35:58 by jiajchen          #+#    #+#             */
/*   Updated: 2024/03/01 09:51:11 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define PINK "\033[95m"
# define RESET "\033[0m"

# include <iostream>

class Brain
{
private:
	std::string	_ideas[100];

public:
	Brain( void );
	Brain( const Brain &cpy );
	~Brain( void );

	Brain	&operator=( const Brain &cpy );

	void		setIdea( std::string idea, int i );
	std::string	getIdea( int i ) const;
};




#endif