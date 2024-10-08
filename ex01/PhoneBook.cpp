/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:40:09 by timo              #+#    #+#             */
/*   Updated: 2024/09/11 01:25:24 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
# include <iostream>
# include <cstring>
#include <iomanip>

PhoneBook::PhoneBook(void)
{
	std::cout << "\033[32m" << "opened empty phonebook" << "\033[0m" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "\033[31m" << "deleted phonebook" << "\033[0m" << std::endl;
}

std::string PhoneBook::truncate(std::string in) const
{
	if (in.length() >= 9)
	{
		std::string result = in.substr(0, 10);
		result[9] = '.';
		return (result); 
	}
	return (in);
}

void PhoneBook::search()
{
	int 		cmd;
	int			i;
	int			j = 0;

	std::cout << "\033[33m" << std::string(45, '-') << "\033[0m" << std::endl;
	for (i = 0; i < 2 && this->contacts[i].empty != 0; i++)
	{
		std::cout << "\033[33m" << '|' <<
			std::setw(10) << i + 1 << '|' <<
			std::setw(10) << this->truncate(this->contacts[i].get_value(1)) << '|' <<
			std::setw(10) << this->truncate(this->contacts[i].get_value(2)) << '|' <<
			std::setw(10) << this->truncate(this->contacts[i].get_value(3)) << '|' <<  "\033[0m" << std::endl;
	}
	std::cout << "\033[33m" << std::string(45, '-') << "\033[0m" << std::endl;
	if (i == 0)
	{
		std::cout << "\033[34m" << "phonebook is still empty, add an entry first" << "\033[0m" << std::endl;
		return ;
	}
	std::cout << "\033[34m" << "input index of Contact for full information:" << "\033[0m" << std::endl;
	std::cin >> cmd;
	while (std::cin.fail() || cmd > i || cmd < 0)
	{
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(100, '\n');
			std::cout << "\033[31m" << "incorrect input, please input a digit or -1 to end the search" << "\033[0m" << std::endl;
		}
		else
		{
			std::cout << "\033[31m" << "index is out of range. Enter a correct index or -1 for ending the search:" << "\033[0m" << std::endl;
			if (cmd == -1 && j != 0)
			{
				std::cout << "\033[34m" << "ended search" << "\033[0m" << std::endl;
				return ;
			}
		}
		std::cin >> cmd;
		j++;
	}
	return(this->display_full(cmd - 1));
}

void PhoneBook::display_full(int ind) const
{
	std::cout << "\033[33m" << this->contacts[ind].get_value(1) << '\n' <<
			 this->contacts[ind].get_value(2) << '\n' <<
			 this->contacts[ind].get_value(3) << '\n' <<
			 this->contacts[ind].get_value(4) << '\n' <<
			 this->contacts[ind].get_value(5) << "\033[0m" << std::endl;
}

void PhoneBook::add_contact()
{
	int i;
	
	for (i = 0; i < 2 && this->contacts[i].empty != 0; i++);
	if (i == 2)
	{
		static int j = 0;
		this->contacts[j].clear_info();
		this->contacts[j].add_info();
		j++;
		if (j == 2)
			j = 0;
		return ;
	}
	this->contacts[i].add_info();
}