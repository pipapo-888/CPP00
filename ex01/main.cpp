/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 20:19:59 by knomura           #+#    #+#             */
/*   Updated: 2026/05/04 10:52:47 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "contact.h"

int main()
{
	std::string line;

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
			Contact contact;
			contact.set_contact();
			std::cout << contact.get_value("first_name") << std::endl;
			
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