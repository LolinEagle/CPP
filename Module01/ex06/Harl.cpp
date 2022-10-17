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
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "Un régiment de fromages blancs\n" << std::endl;;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "Déclare la guerre au camembert\n" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "Mais le port-salut n'a pas voulu\n" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "Car le roquefort était trop fort\n" << std::endl;
}

void	Harl::complain(std::string level)
{
	int			i;
	std::string harl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*fptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (i = 0; i < 4; i++)
	{
		if (level == harl[i])
			break ;
	}
	switch (i)
	{
		case 0:
			(this->*fptr[0])();
			(this->*fptr[1])();
			(this->*fptr[2])();
			(this->*fptr[3])();
		break;
		case 1:
			(this->*fptr[1])();
			(this->*fptr[2])();
			(this->*fptr[3])();
		break;
		case 2:
			(this->*fptr[2])();
			(this->*fptr[3])();
		break;
		case 3:
			(this->*fptr[3])();
		break;
		default :
			std::cout << "[ Probably singing a stupid song ]\n";
		break;
	}
}
