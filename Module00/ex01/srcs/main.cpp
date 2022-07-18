/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:22:52 by frrusso           #+#    #+#             */
/*   Updated: 2022/07/07 15:22:55 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	set_contact(const char *str, PhoneBook *book, int n)
{
	std::string	line;

	std::cout << str;
	while (getline(std::cin, line))
	{
		if (line.empty())
		{
			std::cout << str;
			continue;
		}
		(*book).set_contact(line, n);
		return (0);
	}
	return (1);
}

int	main(void)
{
	PhoneBook	book;
	std::string	line;

	std::cout << "PhoneBook> ";
	while (getline(std::cin, line))
	{
		if (line.compare("ADD") == 0)
		{
			if (set_contact("first name> ", &book, 0))
				break ;
			if (set_contact("last name> ", &book, 1))
				break ;
			if (set_contact("nick name> ", &book, 2))
				break ;
			if (set_contact("phone number> ", &book, 3))
				break ;
			if (set_contact("darkest secret> ", &book, 4))
				break ;
			book.next_contact();
		}
		else if (line.compare("SEARCH") == 0)
		{
			if (book.print_all())
				break ;
		}
		else if (line.compare("EXIT") == 0)
			exit(0);
		std::cout << "PhoneBook> ";
	}
	std::cout << std::endl;
	return (0);
}
