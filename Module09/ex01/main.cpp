/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:09:57 by frrusso           #+#    #+#             */
/*   Updated: 2023/03/16 12:09:59 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RPN.hpp>

int	main(int ac, char **av)
{
	if (ac < 2)
		std::cout << RED << "Error : no argument." << RESET;
	else
	{
		for (int i = 1; i < ac; i++)
		{
			RPN	rpm(av[i]);
			std::cout << BLUE << rpm.execute() << RESET;
		}
	}
	return (0);
}
