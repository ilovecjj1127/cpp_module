/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/16 12:05:05 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/16 14:41:29 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap("", 100, 100, 30)
{
	std::cout << BLUE "Default FragTrap called " RESET << std::endl;
}

FragTrap::FragTrap( std::string name ): ClapTrap(name, 100, 100, 30)
{
	std::cout << BLUE "Constructor FragTrap: " << this->_name << RESET << std::endl;
}

FragTrap::FragTrap( const FragTrap &fragtrap )
{
	std::cout << BLUE "Copy FragTrap called " RESET << std::endl;
	*this = fragtrap;
}

FragTrap::~FragTrap()
{
	std::cout << BLUE "Destructor FragTrap: " << this->_name << RESET << std::endl;
}

FragTrap	&FragTrap::operator=( const FragTrap &fragtrap )
{
	this->_name = fragtrap._name;
	this->_hitPoints = fragtrap._hitPoints;
	this->_energyPoints = fragtrap._energyPoints;
	this->_attackDamage = fragtrap._attackDamage;
	std::cout << BLUE "FragTrap copy assignment operator called" RESET << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << BLUE "FragTrap " << this->_name << " requests for high fives!" RESET << std::endl;
}