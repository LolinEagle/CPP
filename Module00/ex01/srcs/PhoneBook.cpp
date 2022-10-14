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
		this->tab[i].set_first(line);
	else if (n == 1)
		this->tab[i].set_last(line);
	else if (n == 2)
		this->tab[i].set_nick(line);
	else if (n == 3)
		this->tab[i].set_phone(line);
	else if (n == 4)
		this->tab[i].set_secret(line);
}

void	PhoneBook::next_contact()
{
	this->i++;
	if (this->i == 8)
		this->i = 0;
}

int	PhoneBook::print_all()
{
	int			i;
	int			id;
	std::string	line;

	i = 0;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	while (i < 8)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		if (this->tab[i].get_first().size() <= 10)
			std::cout << std::setw(10) << this->tab[i].get_first() << "|";
		else
			std::cout << std::setw(9) << this->tab[i].get_first().substr(0, 9) << ".|";
		if (this->tab[i].get_last().size() <= 10)
			std::cout << std::setw(10) << this->tab[i].get_last() << "|";
		else
			std::cout << std::setw(9) << this->tab[i].get_last().substr(0, 9) << ".|";
		if (this->tab[i].get_nick().size() <= 10)
			std::cout << std::setw(10) << this->tab[i].get_nick() << "|";
		else
			std::cout << std::setw(9) << this->tab[i].get_nick().substr(0, 9) << ".|";
		std::cout << std::endl;
		i++;
	}
	std::cout << "Enter a index to have more info> ";
	while (getline(std::cin, line))
	{
		if (line.size() != 1)
		{
			std::cout << "Enter a index to have more info> ";
			continue ;
		}
		id = atoi(line.c_str());
    	if (id < 1 || id > 8)
		{
			std::cout << "Enter a index to have more info> ";
			continue ;
		}
		std::cout << "index : " << id << std::endl;
		id--;
		std::cout << "first name : " << this->tab[id].get_first() << std::endl;
		std::cout << "last name : " << this->tab[id].get_last() << std::endl;
		std::cout << "nick name : " << this->tab[id].get_nick() << std::endl;
		std::cout << "phone number : " << this->tab[id].get_phone() << std::endl;
		return (0);
	}
	return (1);
}
