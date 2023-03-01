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

int	main(int ac, char **av)
{
	BitcoinExchange	a;
	BitcoinExchange b(a);
	
	if (ac < 2)
		std::cout << "Error: could not open file." << std::endl;
	else 
	{
		(void)av;
	}
	return (0);
}
