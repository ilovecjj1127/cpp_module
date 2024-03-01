/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:03:54 by jessie            #+#    #+#             */
/*   Updated: 2024/03/01 15:48:43 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria	*_materias[4];
public:
	MateriaSource();
	MateriaSource( const MateriaSource &cpy );
	~MateriaSource();

	MateriaSource	&operator=( const MateriaSource &cpy );

	void		learnMateria( AMateria *m );
	AMateria	*createMateria( const std::string &type );
};

#endif