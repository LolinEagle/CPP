/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:25:23 by frrusso           #+#    #+#             */
/*   Updated: 2022/07/20 17:25:25 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		i = 0;
	Zombie*	zero;

	zero = zombieHorde(8, "FC-KC");
	while (i < 8)
	{
		zero[i].announce();
		i++;
	}
	delete [] zero;
	return (0);
}
