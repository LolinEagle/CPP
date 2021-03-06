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
	Zombie	*heap = newZombie("Leak_on_foot");

	heap->announce();
	randomChump("Sam");
	delete (heap);
	return (0);
}
