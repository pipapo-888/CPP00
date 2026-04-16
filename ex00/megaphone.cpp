/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 10:49:16 by knomura           #+#    #+#             */
/*   Updated: 2026/04/16 13:31:13 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main(int ac, char **av)
{
	if (ac != 2 || av[1][0] == '\0')
		return (1);
	for (int i = 0; av[1][i]; i++)
		av[1][i] = std::toupper(av[1][i]);
	
	std::cout << av[1] << std::endl;

	return (0);
}
