/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 04:33:26 by knomura           #+#    #+#             */
/*   Updated: 2026/07/08 13:32:06 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <cstdlib>
#include "contact.h"

Contact::Contact() {}

void Contact::check_input()
{
	if (first_name == "")
		return;
	std::cout << std::setfill('-') << std::setw(44) << "" << std::setfill(' ') << std::endl;

	std::cout << std::setw(14) << "first name: " << first_name << std::endl;
	std::cout << std::setw(14) << "last name: " << last_name << std::endl;
	std::cout << std::setw(14) << "nickname: " << nickname << std::endl;
	std::cout << std::setw(14) << "phone number: " << phone_number << std::endl;
	std::cout << std::setw(14) << "secret: " << darkest_secret << std::endl;

	std::cout << std::setfill('-') << std::setw(44) << "" << std::setfill(' ') << std::endl;
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

bool Contact::set_contact_value(std::string label, std::string &field)
{
	std::string input;

	while (input.empty() || input.find_first_not_of(' ') == std::string::npos)
	{
		std::cout << std::setw(14) << label;
		if (!std::getline(std::cin, input))
		{
			std::cout << std::endl;
			return false;
		}
	}
	field = input;
	return true;
}

void Contact::set_contact()
{
	if (!set_contact_value("first name: ", first_name))
		return;
	if (!set_contact_value("last name: ", last_name))
		return;
	if (!set_contact_value("nickname: ", nickname))
		return;
	if (!set_contact_value("phone number: ", phone_number))
		return;
	if (!set_contact_value("secret: ", darkest_secret))
		return;
}