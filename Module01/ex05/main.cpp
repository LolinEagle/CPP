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
	Harl		harl;
	std::string	level;

	if (ac != 2)
		return (0);
	level = av[1];
	harl.complain(level);
	return (0);
}
