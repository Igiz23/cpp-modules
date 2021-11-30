# include "Account.hpp"
# include <iostream>
# include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (Account::_totalNbWithdrawals);
}

int Account::checkAmount( void ) const
{
	return(this->_amount);
}

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_totalAmount += _amount;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp ();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
	<< ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp ();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
	<< ";closed" << std::endl;
	return ;
}

void	Account::_displayTimestamp( void )
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	std::cout << "[" << ltm->tm_year + 1900 << std::setfill('0')
	<< std::setw(2) << ltm->tm_mon + 1 << std::setw(2) << ltm->tm_mday
	<< "_" << std::setw(2) << ltm->tm_hour << std::setw(2) << ltm->tm_min
	<< std::setw(2) << ltm->tm_sec << "] ";
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp ();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
	<< ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals
	<< std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp ();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
	<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp ();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
	<< ";deposit:" << deposit;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout  << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits
	<<std::endl;
	_totalAmount += deposit;
	return ;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp ();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;

	if (withdrawal > _amount)
	{
		std::cout << ";withdrawal:refused" <<std::endl;
		return (1);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout  << ";withdrawal:" << withdrawal << ";amount:"
	<< _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	_totalAmount -= withdrawal;
	return (0);
}
