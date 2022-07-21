/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:01:28 by frrusso           #+#    #+#             */
/*   Updated: 2022/07/21 15:01:34 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int		i = 0;
	Zombie*	res = new Zombie[N];

	while (i < N)
	{
		res[i].setName(name);
		i++;
	}
	return (res);
}
