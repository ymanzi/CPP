#include "Account.class.hpp"
#include <iostream>

Account::Account(void) : _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{}

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(1)
{}

Account::~Account(void)
{}

void Account::makeDeposit(int deposit)
{
	_amount += deposit;
	_nbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
	return ((_amount - withdrawal) > 0 ? _amount-=withdrawal: false);
}

int Account::checkAmount(void) const
{
	return (_amount);
}

void Account::displayStatus(void) const
{
	std::cout << "Acc.Index : " << _accountIndex << std::endl;
	std::cout << "Amount : " << _amount << std::endl;
	std::cout << "Nb Deposits : " << _nbDeposits << std::endl;
	std::cout << "Nb Withdrawals : " << _nbWithdrawals << std::endl;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	std::cout << "SISI LA MIFF VOICI les infos des comptes \n";
} 

void Account::_displayTimestamp(void)
{
	std::cout << "AUCUNE IDEE QUOI FAIRE \n";
}
