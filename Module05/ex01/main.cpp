/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:08:51 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/07 12:08:54 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	a(1);
	Bureaucrat	b(150);

	std::cerr << std::endl;
	try
	{
		Form	c("\"Increase the number of ducks\"", 0, 151, 151);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cerr << std::endl;
	try
	{
		Form	d("\"Increase the number of ducks\"", 0, 0, 0);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cerr << std::endl;
	try
	{
		Form	x("\"Increase the number of ducks\"", 0, 150, 150);
		x.beSigned(a);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cerr << std::endl;
	try
	{
		Form	y("\"Increase the number of ducks\"", 0, 1, 1);
		y.beSigned(b);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cerr << std::endl;
	return (0);
}
