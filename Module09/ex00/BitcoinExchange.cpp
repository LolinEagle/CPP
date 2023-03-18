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
	std::ifstream	infile("file/data.csv");
	if (infile.is_open() == false)
	{
		std::cout << "data.csv not found." << std::endl;
		return ;
	}

	char	str[20];
	infile.getline(str, 20);
	while (infile.getline(str, 20))
	{
		_data.insert(std::pair<std::string,double>(
			std::string(str, 10), atof(str + 11))
		);
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	*this = copy;
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &copy)
{
	_data = copy._data;
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
}

double	BitcoinExchange::   getData(std::string const &str) const
{
	std::map<std::string,double>::const_iterator	it = _data.find(str);
	if (it != _data.end())
		return (_data.at(str));
	std::string	tmp(str);
	char		day[3] = {str[8], str[9], '\0'};
	int			i = atoi(day);
	if (i > 1)
	{
		i--;
		tmp[8] = (i / 10) + '0';
		tmp[9] = (i % 10) + '0';
		std::map<std::string,double>::const_iterator	it = _data.find(tmp);
		if (it != _data.end())
			return (_data.at(tmp));
	}
	i = atoi(day);
	if (i > 2)
	{
		i -= 2;
		tmp[8] = (i / 10) + '0';
		tmp[9] = (i % 10) + '0';
		std::map<std::string,double>::const_iterator	it = _data.find(tmp);
		if (it != _data.end())
			return (_data.at(tmp));
	}
	return (0.0);
}
