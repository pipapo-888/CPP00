/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 04:33:26 by knomura           #+#    #+#             */
/*   Updated: 2026/05/04 06:33:24 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.h"

Contact::Contact()
{
	std::cout << "hi i am constructor" << std::endl;
}

void Contact::set_contact()
{
	first_name = "nom";
}

std::string Contact::get_value(const std::string &type)
{
	if (type == "first_name")
		return (first_name);
	else return ("wrong");
}