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

// • The numbers used in this operation will always be less than 10.

// • Your program must be able to handle operations with these tokens: "+ - / *".

// $> ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
// 42
// $> ./RPN "7 7 * 7 -"
// 42
// $> ./RPN
// Error
