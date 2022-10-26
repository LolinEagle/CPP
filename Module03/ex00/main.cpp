/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:09:11 by frrusso           #+#    #+#             */
/*   Updated: 2022/10/26 14:09:20 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("bot1");
	ClapTrap	b("bot2");
	ClapTrap	c("bot3");

	std::cout << a.getname() << std::endl;
	std::cout << b.getname() << std::endl;
	std::cout << c.getname() << std::endl;
	a.attack("a man");
	b.takeDamage(10);
	b.takeDamage(10);
	c.beRepaired(90);
	std::cout << c.gethp() << std::endl;
	return (0);
}
