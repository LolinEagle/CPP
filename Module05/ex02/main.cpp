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

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	try
	{
		PresidentialPardonForm	a("a1");
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cerr << std::endl;
	try
	{
		RobotomyRequestForm	b("b2");
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cerr << std::endl;
	try
	{
		ShrubberyCreationForm	c("c3");
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cerr << std::endl;
	return (0);
}
