/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:58:42 by jessie            #+#    #+#             */
/*   Updated: 2024/03/01 14:58:02 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure( void );
	Cure( const Cure &cpy );
	~Cure( void );

	Cure		&operator=( const Cure &cpy );

	AMateria	*clone() const;
	void		use( ICharacter &target );
};

#endif