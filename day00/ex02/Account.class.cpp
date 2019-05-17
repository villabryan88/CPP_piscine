/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:52:12 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/30 15:05:19 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <ctime>

void	Account::_displayTimestamp( void ) {
	time_t		rawtime;
	struct tm	*timeinfo;
	char 		buf[80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buf, 80, "[%Y%m%d_%H%M%S] ", timeinfo);
	std::cout << buf;
}

Account::Account (int initial_deposit) {
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account ( void) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;;
}

void	Account::makeDeposit(int deposit) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;

	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;	
}

bool	Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "withdrawal:";

	if (this->_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (0);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;

	std::cout << withdrawal << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (1);
}

void	Account::displayStatus (void) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

int		Account::checkAmount(void) const {
	return (this->_amount);
}

int		Account::getNbAccounts(void) {
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount(void) {
	return (Account::_totalAmount);
}

int		Account::getNbDeposits(void) {
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals(void) {
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos (void) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;