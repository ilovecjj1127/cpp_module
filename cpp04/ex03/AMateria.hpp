/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 09:57:03 by jessie            #+#    #+#             */
/*   Updated: 2024/03/01 22:35:23 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define PINK "\033[95m"
# define RESET "\033[0m"

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string	_type;

public:
	AMateria( void );
	AMateria( const std::string &type );
	AMateria( const AMateria &cpy );
	virtual ~AMateria( void );

	AMateria 			&operator=( const AMateria &cpy );

	const std::string	&getType() const;
	virtual AMateria	*clone() const = 0;
	virtual void		use( ICharacter &target );
};

#endif