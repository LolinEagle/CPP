/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:06:49 by frrusso           #+#    #+#             */
/*   Updated: 2023/03/01 13:06:50 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>

BitcoinExchange::BitcoinExchange(void)
{
	std::cout << BLUE << "BitcoinExchange : Default Constructor called" << ENDL;

	std::ifstream	infile("file/data.csv");
	if (infile.is_open() == false)
	{
		std::cout << "data.csv not found." << std::endl;
		return ;
	}

	char	str[20];
	infile.getline(str, 20);
	for (int i = 0; i < 1611; i++)
	{
		infile.getline(str, 20);
		_data.insert(std::pair<std::string,double>(
			std::string(str, 10), atof(str + 11))
		);
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	std::cout << BLUE << "BitcoinExchange : Copy Constructor called" << ENDL;
	*this = copy;
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &copy)
{
	_data = copy._data;
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << RED << "BitcoinExchange : Destructor called" << ENDL;
}
