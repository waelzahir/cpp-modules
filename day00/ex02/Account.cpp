#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	return 1;
}

int	Account::getTotalAmount( void )
{
	std::cout << "total:" << _totalAmount << ";";
	return 1;
}

int	Account::getNbDeposits( void )
{
	std::cout << "deposits:" << _totalNbDeposits << ";";
	return 1;
}

int	Account::getNbWithdrawals( void )
{
	std::cout << "withdrawals:" <<_totalNbWithdrawals << std::endl;
	return 1;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	Account::getNbAccounts();
	Account::getTotalAmount();
	Account::getNbDeposits();
	Account::getNbWithdrawals();
}

Account::Account( int initial_deposit )
{
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout <<";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	if (this->_amount < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalAmount -= withdrawal;
	std::cout << ";withdrawal:" << withdrawal;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	_totalNbWithdrawals++;
	
	return true ;
}

int		Account::checkAmount( void ) const {return 0;}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t ttime = time(0);
	tm *tm = localtime(&ttime);
	std::cout << "[" << 1990 + tm->tm_year << tm->tm_mon << tm->tm_mday << "_" << tm->tm_hour << tm->tm_min << tm->tm_sec << "] ";
}