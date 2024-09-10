/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:51:59 by timo              #+#    #+#             */
/*   Updated: 2024/09/10 17:33:07 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstring>
#include "PhoneBook.hpp"


int main(void)
{
	std::string command;
	PhoneBook pbook;
	while (command != "EXIT")
	{
		std::cout << "\033[34m" << "enter command:" << "\033[0m" << std::endl;
		std::cin >> command;
		if (command == "ADD")
			pbook.add_contact();
		if (command == "SEARCH")
			pbook.search();
	}
}