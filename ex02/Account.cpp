/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 20:04:12 by knomura           #+#    #+#             */
/*   Updated: 2026/07/11 21:00:34 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"
#define TIME "[19920104_091532]"

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	static int index = 0;
	_displayTimestamp();
	std::cout << "index:" << index << ";amount:" << _amount << ";created" << std::endl;
	index++;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	// std::cout << " accounts:" << getNbAccounts() << ";total:" << getNbDeposits() << "deposits:" << getNbDeposits() << ";withdrawls:" << getNbWithdrawals() << std::endl;
}

void Account::_displayTimestamp()
{
	std::time_t now = std::time(NULL);
    std::tm* t = std::localtime(&now);

    char timestamp[16 + 1];

    std::strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", t);

    std::cout << "[" << timestamp << "] ";
}

Account::~Account() {}