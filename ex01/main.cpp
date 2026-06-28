/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 20:19:59 by knomura           #+#    #+#             */
/*   Updated: 2026/06/28 22:13:26 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "contact.h"
#include "phoneBook.h"

int main()
{
	std::string line;
	PhoneBook phonebook;

	while (1)
	{
		std::cout << "cmd: ";
		if (!std::getline(std::cin, line))
		{
			std::cout << "eror";
		}
		if (line == "EXIT")
		{
			std::cout << "exit" << std::endl;
			break;
		}
		else if (line == "ADD")
		{
			std::cout << "add" << std::endl;
			
			phonebook.create_contact();
			
		}
		else if (line == "SEARCH")
		{
			std::cout << "search" << std::endl;
		}
		else
			std::cout << "WRONG INPUT" << std::endl;		
	}
	return (0);
}