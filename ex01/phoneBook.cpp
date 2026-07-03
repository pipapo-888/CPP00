/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 22:47:37 by knomura           #+#    #+#             */
/*   Updated: 2026/07/04 01:08:23 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.h"

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
	std::cout << count << std::endl;
	
	std::cout << "index     |first name|last name | nickname " << std::endl;
	

	for (int i = 0; i < 8; i++)
	{
		contacts[i].check_input();
	}
}
