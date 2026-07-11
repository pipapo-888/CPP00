/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 20:04:12 by knomura           #+#    #+#             */
/*   Updated: 2026/07/11 20:33:09 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"
#define TIME "[19920104_091532]"

Account::Account(int initial_deposit) : _amount(initial_deposit) {
	static int index = 0;
	_displayTimestamp();
	std::cout << " index:" << index << ";amount:" << _amount << ";created" << std::endl;
	index++;
}


Account::~Account(){}