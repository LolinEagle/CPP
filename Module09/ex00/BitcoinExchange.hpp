/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:06:54 by frrusso           #+#    #+#             */
/*   Updated: 2023/03/01 13:06:56 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <map>

#define RED		"\033[31m"
#define BLUE	"\033[34m"
#define ENDL	"\033[0m" << std::endl

class BitcoinExchange
{
	private:
		std::map<std::string,double>	_data;
	public:
		/* Constructor & Destructor ***************************************** */
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange	&operator=(const BitcoinExchange &copy);
		~BitcoinExchange();
		
		/* Function ********************************************************* */
		double	getData(std::string const &str) const;
};

#endif
