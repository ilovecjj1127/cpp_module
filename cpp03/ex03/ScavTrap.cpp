/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/14 12:44:10 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/16 11:42:53 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	ClapTrap("", 100, 50, 20);
	std::cout << GREEN "Default ScavTrap called " RESET << std::endl;
}

ScavTrap::ScavTrap( std::string name ): ClapTrap(name, 100, 50, 20)
{
	std::cout << GREEN "Constructor ScavTrap: " << this->_name << RESET << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &scavtrap )
{
	std::cout << GREEN "Copy ScavTrap called " RESET << std::endl;
	*this = scavtrap;
}

ScavTrap::~ScavTrap()
{
	std::cout << GREEN "Destructor ScavTrap: " << this->_name << RESET << std::endl;
}

ScavTrap	&ScavTrap::operator=( const ScavTrap &scavtrap )
{
	this->_name = scavtrap._name;
	this->_hitPoints = scavtrap._hitPoints;
	this->_energyPoints = scavtrap._energyPoints;
	this->_attackDamage = scavtrap._attackDamage;
	std::cout << GREEN "ScavTrap copy assignment operator called" RESET << std::endl;
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << PINK << _name << " is in gate keeper mode." RESET << std::endl;
}

void	ScavTrap::attack( const std::string &target )
{
	std::cout << GREEN;
	if (_hitPoints <= 0)
		std::cout << "ScavTrap " << _name << " is dead." << std::endl;
	else if (_energyPoints <= 0)
		std::cout << "ScavTrap " << _name << " has no energy." << std::endl;
	else
	{
		this->_energyPoints--;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing ";
		std::cout << _attackDamage << " points of damage!" << std::endl;
	}
	std::cout << RESET;
}