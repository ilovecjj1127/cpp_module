/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jiajchen <jiajchen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 15:12:26 by jiajchen      #+#    #+#                 */
/*   Updated: 2024/02/01 14:42:03 by jiajchen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( void )
{}

Account::Account( int initial_deposit )
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
	_nbAccounts++;
	_totalAmount += initial_deposit;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}
	
void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	_totalNbDeposits++;
	_totalAmount += deposit;
	this->_nbDeposits++;
	this->_amount += deposit;
	std::cout << ";withdrawal:" << deposit << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:1" << std::endl;	
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	if (withdrawal > this->_amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	std::cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount;
	std::cout << ";nb_withdrawals:1" << std::endl;
	return (true);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << ";" << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t time;
	std::tm		*ltm;
	char		timestamp[16];
		
	time = std::time(0);
	ltm = std::localtime(&time);
	std::strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", ltm);
    std::cout << "[" << timestamp << "] ";
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:";
	std::cout << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

int	Account::getNbAccounts( void )
{ 
	return (_nbAccounts);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}
