/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:28:26 by jiajchen          #+#    #+#             */
/*   Updated: 2024/03/01 09:13:46 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal
{
protected:
	std::string	_type;

public:
	AAnimal( void );
	AAnimal( const std::string type );
	AAnimal( const AAnimal &cpy );
	virtual ~AAnimal( void );

	AAnimal &operator=( const AAnimal &cpy );

	virtual void	makeSound( void ) const = 0;
	std::string		getType( void ) const;
	virtual Brain	*getBrain(void) const = 0;
};


#endif