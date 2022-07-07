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
#include "Contact.hpp"

int main()
{
	PhoneBook	book;
	std::string	line;

	while (1)
	{
		std::cout << "PhoneBook> ";
		getline(std::cin, line);
		if (line.compare("ADD") == 0)
		{
			std::cout << line << std::endl;
		}
		else if (line.compare("SEARCH") == 0)
		{
			std::cout << line << std::endl;
		}
		else if (line.compare("EXIT") == 0)
			break;
	}
	return (0);
}
