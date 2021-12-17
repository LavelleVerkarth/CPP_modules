#include "Account.hpp"
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit){
	_displayTimestamp();
	_amount = initial_deposit;
	_accountIndex = _nbAccounts++;
	_totalAmount += initial_deposit;
	std::cout << "amount:" << _amount << ";";
	std::cout << "created\n";
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	
}

Account::~Account(void){
	_displayTimestamp();
	_nbAccounts--;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed\n";
}

void Account::displayAccountsInfos(void){
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << "\n";

}

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << "\n";

}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposits:" << deposit << ";";
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits += deposit;
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << ++_nbDeposits << "\n";
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	if (withdrawal > _amount){
		std::cout << "refused\n";
		return (0);
	}
	std::cout << "withdrawal:" << withdrawal << ";";
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals += withdrawal;
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_withdrawals:" << ++_nbWithdrawals << "\n";
	return(1);
}

void	Account::_displayTimestamp( void ) {

	time_t			now		= time(0);
	struct std::tm	*ptm	= std::localtime(&now);

	std::cout << std::put_time(ptm, "[%G%m%d_%H%M%S] ");
	return ;
}

int	Account::getNbAccounts( void ) {
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void ) {
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return Account::_totalNbWithdrawals;
}
