/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:13:02 by frrusso           #+#    #+#             */
/*   Updated: 2022/10/13 13:13:06 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;

	if (ac == 1)
		std::cout << "[ Probably singing a stupid song ]\n";
	if (ac == 2)
		harl.complain(av[1]);
	return (0);
}
