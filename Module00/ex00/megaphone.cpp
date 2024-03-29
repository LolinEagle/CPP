/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:03:14 by frrusso           #+#    #+#             */
/*   Updated: 2022/07/07 12:03:21 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			av[i][j] = std::toupper(av[i][j]);
		std::cout << av[i];
	}
	std::cout << std::endl;
	return (0);
}
