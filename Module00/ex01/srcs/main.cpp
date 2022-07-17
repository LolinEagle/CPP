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

void	set_contact(const char *str, PhoneBook *book, int n)
{
	std::string	line;

	do
	{
		std::cout << str;
		getline(std::cin, line);
	}
	while (line.empty());
	(*book).set_contact(line, n);
}

int	main()
{
	PhoneBook	book;
	std::string	line;

	while (1)
	{
		std::cout << "PhoneBook> ";
		getline(std::cin, line);
		if (line.compare("ADD") == 0)
		{
			set_contact("first name> ", &book, 0);
			set_contact("last name> ", &book, 1);
			set_contact("nick name> ", &book, 2);
			set_contact("phone number> ", &book, 3);
			set_contact("darkest secret> ", &book, 4);
			book.next_contact();
		}
		else if (line.compare("SEARCH") == 0)
		{
			book.print_all();
		}
		else if (line.compare("EXIT") == 0)
			break;
	}
	return (0);
}
