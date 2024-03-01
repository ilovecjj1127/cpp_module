/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:05:36 by jessie            #+#    #+#             */
/*   Updated: 2024/03/01 15:19:57 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter
{
private:
	std::string			_name;
	AMateria			*_materias[4];

public:
	Character();
	Character( std::string name );
	Character( const Character &cpy );
	~Character();

	Character			&operator=( const Character &cpy );

	const std::string	&getName() const;
	void				equip( AMateria *m );
	void				unequip( int idx );
	void				use( int idx, ICharacter &target );
};

#endif