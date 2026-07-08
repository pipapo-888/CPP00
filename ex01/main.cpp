/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 20:19:59 by knomura           #+#    #+#             */
/*   Updated: 2026/07/08 13:31:52 by knomura          ###   ########.fr       */
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
		std::cout << "PhoneBook> ";
		if (!std::getline(std::cin, line))
		{
			std::cout << std::endl
					  << "Error" << std::endl;
			break;
		}
		if (line == "ADD")
			phonebook.create_contact();
		else if (line == "SEARCH")
			phonebook.show_contacts();
		else if (line == "EXIT")
			break;
		else
			std::cout << "WRONG INPUT" << std::endl;
	}
	return (0);
}