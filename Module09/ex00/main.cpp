/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:13:16 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/16 14:13:18 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>

bool	parsing(char *str)
{
	if (strlen(str) < 14)
		return (true);
	if (str[04] != '-' || str[07] != '-' ||
		str[10] != ' ' || str[11] != '|' || str[12] != ' ')
		return (true);
	for (size_t i = 0; i < strlen(str); i++)
	{
		if (i == 4 || i == 7)
			continue ;
		if (i == 10)
			i = 13;
		if (i == 13 && (str[13] == '-' || str[13] == '+'))
			continue ;
		if (isdigit(str[i]) == false && str[i] != '.')
			return (true);
	}
	return (false);
}

int		main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "Error: could not open file." << std::endl;
	else
	{
		BitcoinExchange	btc;

		for (int i = 1; i < ac; i++)
		{
			std::ifstream	infile(av[i]);
			if (infile.is_open() == false)
			{
				std::cout << av[i] << " not found." << std::endl;
				continue ;
			}

			char	str[25];
			infile.getline(str, 25);
			while (infile.getline(str, 25))
			{
				if (parsing(str))
				{
					std::cout << "Error: bad input => " << str << std::endl;
					continue ;
				}
				if (str[13] == '-')
				{
					std::cout << "Error: not a positive number." << std::endl;
					continue ;
				}
				double	n = atof(str + 13);
				if (n > 1000)
				{
					std::cout << "Error: too large a number" << std::endl;
					continue ;
				}
				std::string	date(str, 10);
				std::cout << date << " => " << n << " = " << btc.getData(date) * n << std::endl;
			}
		}
	}
	return (0);
}
