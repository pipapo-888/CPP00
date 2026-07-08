/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 22:12:41 by knomura           #+#    #+#             */
/*   Updated: 2026/07/08 13:31:44 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.h"

class PhoneBook
{
private:
	Contact contacts[8];
	int count;

public:
	PhoneBook();
	void create_contact();
	void show_contacts();
};

#endif