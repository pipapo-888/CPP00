/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 04:33:26 by knomura           #+#    #+#             */
/*   Updated: 2026/07/04 19:34:38 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "contact.h"

Contact::Contact() {}

void Contact::check_input()
{
	if (first_name == "")
		return;
	std::cout << std::setw(14) << "first name: " << first_name << std::endl;
	std::cout << std::setw(14) << "last name: " << last_name << std::endl;
	std::cout << std::setw(14) << "nickname: " << nickname << std::endl;
	std::cout << std::setw(14) << "phone number: " << phone_number << std::endl;
	std::cout << std::setw(14) << "secret: " << darkest_secret << std::endl;
}

void Contact::display_contact_value(std::string val)
{
	if (val.size() <= 10)
		std::cout << std::setw(10) << val << "|";
	else
		std::cout << val.substr(0, 9) << ".|" ;
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

	std::cout << std::setw(14) << "first name: ";
	std::getline(std::cin, input);
	first_name = input;

	std::cout << std::setw(14) << "last name: ";
	std::getline(std::cin, input);
	last_name = input;

	std::cout << std::setw(14) << "nickname: ";
	std::getline(std::cin, input);
	nickname = input;

	std::cout << std::setw(14) << "phone number: ";
	std::getline(std::cin, input);
	phone_number = input;

	std::cout << std::setw(14) << "secret: ";
	std::getline(std::cin, input);
	darkest_secret = input;

}

// std::string Contact::get_value(const std::string &type)
// {
// 	if (type == "first_name")
// 		return (first_name);
// 	else
// 		return ("wrong");
// }