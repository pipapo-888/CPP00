/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 22:47:37 by knomura           #+#    #+#             */
/*   Updated: 2026/07/04 19:30:51 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.h"
#include <iomanip>
#include <cstdlib>
#include <cctype>


// PhoneBook::PhoneBook()
// {
// 	count = 0;
// }

PhoneBook::PhoneBook() : count(0) {}

void PhoneBook::create_contact()
{
	contacts[count % 8].set_contact();
	count++;
}
void PhoneBook::show_contacts()
{
	std::string line;

	if (count == 0)
	{
		std::cout << "No Contact In PhoneBook\n";
		return ;
	}
	
	std::cout << "   index  |first name| last name| nickname " << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	
	for (int i = 0; i < 8 && i < count; i++)
	{
		std::cout << std::setw(10) << i << "|";
		contacts[i].show_contact();
	}

	while (1)
	{	
		std::cout << "Select an index from above: ";
		std::getline(std::cin, line);
		int num = std::atoi(line.c_str());
		
		if (std::isdigit(line[0]) && num >= 0 && num < 8 && num < count)
		{
			contacts[num].check_input();
			return ;
		}
	}
}
