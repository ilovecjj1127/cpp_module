/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/16 14:15:42 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/20 14:05:57 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): ClapTrap("_clap_name", 100, 50, 30), _name("")
{
	std::cout << RED "Default DiamondTrap called " RESET << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ): ClapTrap(name + "_clap_name", 100, 50, 30), _name(name)
{
	std::cout << RED "Constructor DiamondTrap: " << this->_name << RESET << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &diamondtrap )
{
	std::cout << RED "Copy DiamondTrap called " RESET << std::endl;
	*this = diamondtrap;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << RED "Destructor DiamondTrap: " << this->_name << RESET << std::endl;
}

DiamondTrap	&DiamondTrap::operator=( const DiamondTrap &diamondtrap )
{
	this->_name = diamondtrap._name;
	this->_hitPoints = diamondtrap._hitPoints;
	this->_energyPoints = diamondtrap._energyPoints;
	this->_attackDamage = diamondtrap._attackDamage;
	this->ClapTrap::_name = diamondtrap.ClapTrap::_name;
	std::cout << RED "DiamondTrap copy assignment operator called" RESET << std::endl;
	return (*this);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << RED "My DiamondTrap name is " << _name;
	std::cout << ". My ClapTrap name is " << ClapTrap::_name << RESET << std::endl;
}

void	DiamondTrap::attack( const std::string &target )
{
	ScavTrap::attack(target);
}

