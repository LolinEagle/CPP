/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:16:30 by frrusso           #+#    #+#             */
/*   Updated: 2022/10/13 13:16:32 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "Un régiment de fromages blancs\n";
}

void	Harl::info(void)
{
	std::cout << "Déclare la guerre au camembert\n";
}

void	Harl::warning(void)
{
	std::cout << "Mais le port-salut n'a pas voulu\n";
}

void	Harl::error(void)
{
	std::cout << "Car le roquefort était trop fort\n";
}

Harl::Harl(void)
{
	std::cout << "Harl is born\n";
}

Harl::~Harl()
{
	std::cout << "Harl is dead\n";
}

void	Harl::complain(std::string level)
{
	int			i;
	std::string harl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*fptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (i = 0; i < 4; i++)
	{
		if (level == harl[i])
			(this->*fptr[i])();
	}
}
