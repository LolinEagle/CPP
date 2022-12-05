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

	// My tests
	std::cout << GREEN << "My tests" << RESET << std::endl;
	Span	spanA = Span();
	Span	spanB = Span(8);
	Span	spanC = Span(spanB);
	Span	spanD = Span(10000);
	Span	spanE = Span(8);

	// SpanA tests
	std::cout << GREEN << "spanA tests" << RESET << std::endl;
	try
	{
		spanA.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	try
	{
		Span	spanA0 = Span(1);
		spanA0.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	// SpanB tests
	std::cout << GREEN << "spanB tests" << RESET << std::endl;
	srand (time(NULL));
	for (size_t i = 0; i < 8; i++)
	{
		spanB.addNumber(rand() % 20 + 1);
		std::cout << (i % 2 ? MAGENTA : CYAN) << "spanB[" << i << "]=" <<
		spanB.getTab(i) << RESET << std::endl;
	}

	try
	{
		std::cout << '(' << spanB.shortestSpan() << ") shortestSpan" << std::endl;
		std::cout << '(' << spanB.longestSpan() << ") longestSpan must be 19 max" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	try
	{
		std::cout << RED << spanB.getTab(-1) << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	// SpanC tests
	std::cout << GREEN << "spanC tests" << RESET << std::endl;
	for (size_t i = 0; i < 8; i++)
	{
		std::cout << (i % 2 ? MAGENTA : CYAN) << "spanC[" << i << "]=" <<
		spanC.getTab(i) << RESET << std::endl;
	}

	// SpanD tests
	std::cout << GREEN << "spanD tests" << RESET << std::endl;
	for (size_t i = 0; i < 10000; i++)
		spanD.addNumber(rand() % 10000 + 1);

	try
	{
		std::cout << '(' << spanD.shortestSpan() << ") shortestSpan" << std::endl;
		std::cout << '(' << spanD.longestSpan() << ") longestSpan must be 9999 max" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	
	// SpanE tests
	std::cout << GREEN << "spanE tests" << RESET << std::endl;
	std::vector<size_t>	copy(8);
	for (size_t i = 0; i < 8; i++)
		copy[i] = spanB.getTab(i);

	try
	{
		spanE.addMultipleNumber(copy.begin(), copy.end());
		for (size_t i = 0; i < 8; i++)
		{
			std::cout << (i % 2 ? MAGENTA : CYAN) << "spanE[" << i << "]=" <<
			spanE.getTab(i) << RESET << std::endl;
		}
		spanE.addMultipleNumber(copy.begin(), copy.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	std::cout << GREEN << "Call destructor" << RESET << std::endl;
	return (0);
}
