#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void)
{
    time_t ctime = time(NULL);
    struct tm* ltime = localtime(&ctime);
    std::cout << "[";
    std::cout << ltime->tm_year + 1900 << ltime->tm_mon + 1 << ltime->tm_mday;
    std::cout << "_";
    std::cout << ltime->tm_hour << ltime->tm_min << ltime->tm_sec;
    std::cout << "] ";    
}
Account::Account( int initial_deposit )
{
    _amount = initial_deposit;
    _accountIndex = _nbAccounts++ ;
    _totalAmount  +=  initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex <<";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;

}
void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex <<";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
}
void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "deposit:" << deposit << ";";
    _amount += deposit;
    _nbDeposits += 1;
    _totalAmount += deposit;
    _totalNbDeposits += 1;
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}
bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    if(_amount - withdrawal < 0)
    {
        std::cout << "withdrawal:";
        std::cout << "refused" << std::endl;
        return false;
    }
    _amount -= withdrawal;
    _nbWithdrawals += 1;
    _totalNbWithdrawals += 1;
    _totalAmount -= withdrawal;
    std::cout << "withdrawal:" << withdrawal << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}
int Account::checkAmount(void) const
{
    return 0;
}

int Account::getNbAccounts(void)
{
    return(_nbAccounts);
}
int Account::getNbDeposits(void)
{
    return(_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
    return(_totalNbWithdrawals);
}
int Account::getTotalAmount(void)
{
    return(_totalAmount);
}
