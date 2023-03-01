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

#include <header.hpp>

class BitcoinExchange
{
	private:
		
	public:
		/* Constructor & Destructor ***************************************** */
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &copy);
		~BitcoinExchange();

		/* Operator overload ************************************************ */
		BitcoinExchange	&operator=(const BitcoinExchange &copy);
		
		/* Function ********************************************************* */
};

#endif
