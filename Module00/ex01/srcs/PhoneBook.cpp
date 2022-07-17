/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:22:55 by frrusso           #+#    #+#             */
/*   Updated: 2022/07/11 18:22:59 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->i = 0;
}

void	PhoneBook::set_contact(std::string line, int n)
{
	if (n == 0)
		this->tab[i].first = line;
	else if (n == 1)
		this->tab[i].last = line;
	else if (n == 2)
		this->tab[i].nick = line;
	else if (n == 3)
		this->tab[i].phone = line;
	else if (n == 4)
		this->tab[i].secret = line;
}

void	PhoneBook::next_contact()
{
	this->i++;
	if (this->i == 8)
		this->i = 0;
}

void	PhoneBook::print_all()
{
	int			i = 0;
	std::string	str;

	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	while (i < 8)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		if (this->tab[i].first.size() <= 10)
			std::cout << std::setw(10) << this->tab[i].first << "|";
		else
			std::cout << std::setw(9) << this->tab[i].first.substr(0, 9) << ".|";
		if (this->tab[i].last.size() <= 10)
			std::cout << std::setw(10) << this->tab[i].last << "|";
		else
			std::cout << std::setw(9) << this->tab[i].last.substr(0, 9) << ".|";
		if (this->tab[i].nick.size() <= 10)
			std::cout << std::setw(10) << this->tab[i].nick << "|";
		else
			std::cout << std::setw(9) << this->tab[i].nick.substr(0, 9) << ".|";
		std::cout  << std::endl;
		i++;
	}
}
