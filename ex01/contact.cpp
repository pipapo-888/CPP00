/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 04:33:26 by knomura           #+#    #+#             */
/*   Updated: 2026/07/07 01:08:09 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "contact.h"

Contact::Contact() {}

void Contact::check_input()
{
	if (first_name == "")
		return;
	std::cout <<  std::setfill('-') <<std::setw(44) << "" << std::setfill(' ') << std::endl;
	
	std::cout << std::setw(14) << "first name: " << first_name << std::endl;
	std::cout << std::setw(14) << "last name: " << last_name << std::endl;
	std::cout << std::setw(14) << "nickname: " << nickname << std::endl;
	std::cout << std::setw(14) << "phone number: " << phone_number << std::endl;
	std::cout << std::setw(14) << "secret: " << darkest_secret << std::endl;

	std::cout <<  std::setfill('-') <<std::setw(44) << "" << std::setfill(' ') << std::endl;
}

void Contact::display_contact_value(std::string val)
{
	if (val.size() <= 10)
		std::cout << std::setw(10) << val << "|";
	else
		std::cout << val.substr(0, 9) << ".|";
}

void Contact::show_contact()
{
	if (first_name == "")
		return;
	display_contact_value(first_name);
	display_contact_value(last_name);
	display_contact_value(nickname);
	std::cout << std::endl;
}

void Contact::set_contact()
{
	std::string input;

	while (input.empty())
	{
		std::cout << std::setw(14) << "first name: ";
		std::getline(std::cin, input);
	}
	first_name = input;

	input = "";

	while (input.empty())
	{
		std::cout << std::setw(14) << "last name: ";
		std::getline(std::cin, input);
	}
	last_name = input;

	input = "";

	while (input.empty())
	{
		std::cout << std::setw(14) << "nickname: ";
		std::getline(std::cin, input);
	}
	nickname = input;
	input = "";

	while (input.empty())
	{	
		std::cout << std::setw(14) << "phone number: ";
		std::getline(std::cin, input);
	}
	phone_number = input;
	input = "";

	while (input.empty())
	{	
		std::cout << std::setw(14) << "secret: ";
		std::getline(std::cin, input);
	}
	darkest_secret = input;
}