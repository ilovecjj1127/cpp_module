/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/14 10:47:35 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/14 12:34:25 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_hitPoints(10), _energyPoints(10), _attackDamage(10)
{
	this->_name = "";
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(10)
{
	std::cout << "Constructor ClapTrap: " << name << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &claptrap )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = claptrap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap: " << _name << std::endl;
}

ClapTrap	&ClapTrap::operator=( const ClapTrap &claptrap )
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	this->_name = claptrap._name;
	this->_hitPoints = claptrap._hitPoints;
	this->_energyPoints = claptrap._energyPoints;
	this->_attackDamage = claptrap._attackDamage;
	return (*this);
}

void	ClapTrap::attack( const std::string &target )
{
	if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
	else if (_energyPoints <= 0)
		std::cout << "ClapTrap " << _name << " has no energy." << std::endl;
	else
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing ";
		std::cout << _attackDamage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	this->_hitPoints -= amount;
	if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " takes " << amount;
		std::cout << " damage and has " << _hitPoints << " hit points! " << std::endl;
	}
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
	else if (_energyPoints <= 0)
		std::cout << "ClapTrap " << _name << " has no energy." << std::endl;
	else
	{
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << "ClapTrap " << _name << " be repaired, gaining ";
		std::cout << amount << " hit points back!" << std::endl;
	}
}