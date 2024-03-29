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

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a;
	ScavTrap	b("C'est nous les Daft Punk");
	ScavTrap	c(b);

	a = b;
	std::cout << a.getname() << std::endl;
	std::cout << b.getname() << std::endl;
	std::cout << c.getname() << std::endl;
	a.attack("des gend!");
	std::cout << "hp=" << a.gethp() << " energy=" << a.getenergy() << " attack=" << a.getattack() << std::endl;
	std::cout << "hp=" << b.gethp() << " energy=" << b.getenergy() << " attack=" << b.getattack() << std::endl;
	std::cout << "hp=" << c.gethp() << " energy=" << c.getenergy() << " attack=" << c.getattack() << std::endl;
	b.takeDamage(10);
	b.takeDamage(10);
	c.beRepaired(90);
	std::cout << b.gethp() << std::endl;
	std::cout << c.gethp() << std::endl;
	return (0);
}
