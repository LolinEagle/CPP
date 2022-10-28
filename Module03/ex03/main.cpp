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

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	a("shox");
	DiamondTrap	b("apex");
	DiamondTrap	c("zywoo");
	DiamondTrap	x;
	DiamondTrap	y(b);
	
	x = a;
	std::cout << "a name=" << a.getname() << std::endl;
	std::cout << "b name=" << b.getname() << std::endl;
	std::cout << "c name=" << c.getname() << std::endl;
	// a.attack("avec une he");
	// std::cout << "hp=" << a.gethp() << " energy=" << a.getenergy() << " attack="
	// << a.getattack() << std::endl;
	// std::cout << "hp=" << b.gethp() << " energy=" << b.getenergy() << " attack="
	// << b.getattack() << std::endl;
	// std::cout << "hp=" << c.gethp() << " energy=" << c.getenergy() << " attack="
	// << c.getattack() << std::endl;
	// a.takeDamage(100);
	// b.takeDamage(20);
	// std::cout << a.gethp() << std::endl;
	// std::cout << b.gethp() << std::endl;
	// c.highFivesGuys();
	// a.whoAmI();
	return (0);
}
