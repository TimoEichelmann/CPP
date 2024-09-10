/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:24:06 by timo              #+#    #+#             */
/*   Updated: 2024/09/11 00:49:43 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
# include <iostream>
# include <cstring>

Contact::Contact(void)
{
	// std::cout << "created" << std::endl;
	this->empty = 0;
	this->f_name = "";
	this->l_name = "";
	this->n_name = "";
	this->ph_num = "";
	this->secret = "";
}

Contact::~Contact(void)
{
	// std::cout << "deleted" << std::endl;
}

void Contact::add_info()
{
	std::cin.ignore(1,'\n');
	while (this->f_name == "")
	{
		std::cout << "\033[34m" << "enter first name: " << "\033[0m" << std::endl;
		std::getline(std::cin, this->f_name);
	}
	while (this->l_name == "")
	{
		std::cout << "\033[34m" << "enter last name: " << "\033[0m" << std::endl;
		std::getline(std::cin, this->l_name);
	}
	while (this->n_name == "")
	{
		std::cout << "\033[34m" << "enter nickname: " << "\033[0m" << std::endl;
		std::getline(std::cin, this->n_name);
	}
	while (this->ph_num == "")
	{
		std::cout << "\033[34m" << "enter phone number: " << "\033[0m" << std::endl;
		std::getline(std::cin, this->ph_num);
	}
	while (this->secret == "")
	{
		std::cout << "\033[34m" << "enter darkest secret: " << "\033[0m" << std::endl;
		std::getline(std::cin, this->secret);
	}
	this->empty = 1;
}

std::string Contact::get_value(int num) const
{
	if (num == 1)
		return (this->f_name);
	if (num == 2)
		return (this->l_name);
	if (num == 3)
		return (this->n_name);
	if (num == 4)
		return (this->ph_num);
	if (num == 5)
		return (this->secret);
	return (NULL);
}

void Contact::clear_info()
{
	this->secret = "";
	this->ph_num = "";
	this->n_name = "";
	this->l_name = "";
	this->f_name = "";
}