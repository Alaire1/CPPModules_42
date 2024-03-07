#include "Account.hpp"
#include <iostream>
#include <iomanip>
//static members of clas have to be initialized outside of class

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//constructor
Account::Account( int initial_deposit ) : _amount(initial_deposit)
{
	_accountIndex = _nbAccounts;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
	Account::_nbAccounts++;
}

//destructor
Account::~Account()
{
	_accountIndex = _nbAccounts - 1;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << this->checkAmount();
	std::cout << ";closed" << std::endl;
	Account::_nbAccounts--;
}

// the time is the same for all the prints, so i think it's fine to use that function
void Account::_displayTimestamp( void ) 
{
	std::cout << "[19920104_091532] ";
}

int Account::getNbAccounts( void ) 
{
	return _nbAccounts;
}

int Account::getTotalAmount( void ) 
{
	return _totalAmount;
}

int Account::getNbDeposits( void ) 
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals( void ) 
{
	return _totalNbWithdrawals;
}	

void Account::displayAccountsInfos(void) 
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals;
	std::cout << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	_totalNbDeposits++;
	_nbDeposits++;
	_totalAmount += deposit;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit << ";amount:" << _amount + deposit;
	std::cout << ";nb_deposits:" << _nbDeposits<< std::endl;
	_amount += deposit;
}

 bool Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	if (_amount - withdrawal < 0)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	else
	{
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}

}

int Account::checkAmount(void) const
{
	return _amount;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}