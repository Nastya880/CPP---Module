/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:37:02 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/14 23:37:03 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//&&&&&&&&&&&&&&&
#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

Account::Account(int initial_deposit):
	_accountIndex(Account::_nbAccounts),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "created" << std::endl;
}

int	Account::getNbAccounts( void ){
	return _nbAccounts;
}

int	Account::getTotalAmount( void ){
	return _totalAmount;
}

int	Account::getNbDeposits( void ){
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ){
//	accounts:8;total:20049;deposits:0;withdrawals:0
	Account::_displayTimestamp();
	std::cout	<< "accounts:" << getNbAccounts() << ";"
				<< "total:" << getTotalAmount() << ";"
				<< "deposits:" << getNbDeposits() << ";"
				<< "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit ){
//	 index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "p_amount:" << this->_amount << ";"
				<< "deposit:" << deposit << ";";
	this->_amount += deposit;
	this->_nbDeposits += 1;
	std::cout	<< "amount:" << this->_amount << ";"
				<< "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
//	index:0;p_amount:47;withdrawal:refused
//	[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
//	[19920104_091532] index:2;p_amount:1521;withdrawal:657;amount:864;nb_withdrawals:1
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "p_amount:" << this->_amount << ";";
	if ((this->_amount - withdrawal) < 0) {
		std::cout << "withdrawal:refused\n";
		return false;
	}
	else{
		std::cout	<< "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		std::cout	<< "amount:" << this->_amount << ";"
					<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	}
}

int		Account::checkAmount( void ) const{
	return _amount;
}

void	Account::displayStatus( void ) const{
//	index:0;amount:47;deposits:1;withdrawals:0
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "deposits:" << this->_nbDeposits << ";"
				<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ){
	time_t	now = time(0);
	tm		*ltm = std::localtime(&now);

	std::cout	<< "[" << 1900 + ltm->tm_year << 1 + ltm->tm_mon <<  ltm->tm_mday << "_"
				<< ltm->tm_hour << ltm->tm_min <<  ltm->tm_sec << "] ";
}

Account::~Account() {
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "closed" << std::endl;
}