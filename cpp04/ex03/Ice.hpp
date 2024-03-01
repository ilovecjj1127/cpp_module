/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:59:28 by jessie            #+#    #+#             */
/*   Updated: 2024/03/01 15:00:10 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice( void );
	Ice( const Ice &cpy );
	~Ice( void );

	Ice			&operator=( const Ice &cpy );

	AMateria	*clone() const;
	void		use( ICharacter &target );
};

#endif