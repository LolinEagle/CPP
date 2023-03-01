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
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	std::cout << BLUE << "BitcoinExchange : Copy Constructor called" << ENDL;
	*this = copy;
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << RED << "BitcoinExchange : Destructor called" << ENDL;
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &copy)
{
	(void)copy;
	return (*this);
}
