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

#include <Span.hpp>

int	main(void)
{
	// Subject tests
	std::cout << GREEN << "Subject tests" << RESET << std::endl;
	Span	sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	for (size_t i = 0; i < 5; i++)
	{
		std::cout << (i % 2 ? MAGENTA : CYAN) << "sp[" << i << "]=" <<
		sp.getTab(i) << RESET << std::endl;
	}

	std::cout << '(' << sp.shortestSpan() << ") must be 2" << std::endl;
	std::cout << '(' << sp.longestSpan() << ") must be 14" << std::endl;

	for (size_t i = 0; i < 5; i++)
	{
		std::cout << (i % 2 ? MAGENTA : CYAN) << "sp[" << i << "]=" <<
		sp.getTab(i) << RESET << std::endl;
	}

	// My tests
	std::cout << GREEN << "My tests" << RESET << std::endl;
	Span	span = Span(8);

	for (size_t i = 0; i < 8; i++)
	{
		span.addNumber(i + 1);
		std::cout << (i % 2 ? MAGENTA : CYAN) << "span[" << i << "]=" <<
		span.getTab(i) << RESET << std::endl;
	}

	try
	{
		
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	
	return (0);
}
