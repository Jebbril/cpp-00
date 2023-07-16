#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = (Account::_nbAccounts)++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex 
		<< ";amount:" << this->_amount << ";created" << std::endl;
}

Account::Account()
{
	this->_accountIndex = (Account::_nbAccounts)++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex 
		<< ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex 
		<< ";amount:" << this->_amount << ";closed" << std::endl;
}

void	Account::_displayTimestamp()
{
	std::time_t	mytime;
	std::tm		*mitime;

	time(&mytime);
	mitime = localtime(&mytime);
	std::cout << "[" << mitime->tm_year + 1900
		<< std::setfill('0') << std::setw(2) 
		<< mitime->tm_mon + 1 << mitime->tm_mday 
		<< "_";
	std::cout << std::setfill('0') << std::setw(2)
		<< mitime->tm_hour << mitime->tm_min 
		<< mitime->tm_sec << "] ";
}

int	Account::getNbAccounts( void )
{
	return(Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return(Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return(Account::_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return(Account::_totalNbWithdrawals);
}
void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts 
		<< ";total:" << Account::_totalAmount << ";deposits:" 
		<< Account::_totalNbDeposits << ";withdrawals:" 
		<< Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	if (deposit > 0) {
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" 
			<< this->_amount << ";deposit:" << deposit << ";amount:";
		this->_amount += deposit;
		Account::_totalAmount += deposit;
		this->_nbDeposits++;
		Account::_totalNbDeposits++;
		std::cout << this->_amount << ";nb_deposits:"
		<< this->_nbDeposits << std::endl;
	}
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal >= this->_amount) {
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:"
		<< this->_amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
	else {
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:"
		<< this->_amount << ";withdrawal:" << withdrawal << ";amount:";
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << this->_amount << ";nb_withdrawals:"
		<< this->_nbWithdrawals << std::endl;
		return (true);
	}
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
	<< this->_amount << ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}