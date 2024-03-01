/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessie <jessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:49:34 by jiajchen          #+#    #+#             */
/*   Updated: 2024/03/01 09:22:17 by jessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"

class Cat: public AAnimal
{
private:
	Brain	*_brain;

public:
	Cat( void );
	Cat( const Cat &cpy);
	~Cat( void );

	Cat	&operator=( const Cat &cpy );

	void	makeSound( void ) const;
	Brain	*getBrain( void ) const;
};

#endif