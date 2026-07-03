/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 04:33:26 by knomura           #+#    #+#             */
/*   Updated: 2026/07/04 01:05:37 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.h"

Contact::Contact()
{
}

void Contact::check_input()
{
	if (first_name == "")
		return ;
	std::cout << "first name: " << first_name << std::endl;
	std::cout << "last name: " << last_name << std::endl;
	std::cout << "nickname: " << nickname << std::endl;
	std::cout << "phone number: " << phone_number << std::endl;
	std::cout << "secret: " << darkest_secret << std::endl;
}

void Contact::set_contact()
{
	std::string input;
	
	std::cout << "first name: ";
	std::getline(std::cin, input);
	first_name = input;

	std::cout << "last name: ";
	std::getline(std::cin, input);
	last_name = input;

	std::cout << "nickname: ";
	std::getline(std::cin, input);
	nickname = input;

	std::cout << "phone number: ";
	std::getline(std::cin, input);
	phone_number = input;

	std::cout << "secret: ";
	std::getline(std::cin, input);
	darkest_secret = input;

	// check_input();
}

std::string Contact::get_value(const std::string &type)
{
	if (type == "first_name")
		return (first_name);
	else return ("wrong");
}