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
	DiamondTrap	x;
	DiamondTrap	a("shox");
	DiamondTrap	b("apex");
	DiamondTrap	c("zywoo");
	DiamondTrap	y(b);
	
	x = a;
	x.whoAmI();
	y.whoAmI();
	a.whoAmI();
	b.whoAmI();
	c.whoAmI();
	std::cout << "x_name=\"" << x.getname() << "\"" << std::endl;
	std::cout << "y_name=\"" << y.getname() << "\"" << std::endl;
	std::cout << "a_name=\"" << a.getname() << "\"" << std::endl;
	std::cout << "b_name=\"" << b.getname() << "\"" << std::endl;
	std::cout << "c_name=\"" << c.getname() << "\"" << std::endl;
	a.attack("avec une he");
	std::cout << "hp=" << a.gethp() << " energy=" << a.getenergy() << " attack="
	<< a.getattack() << std::endl;
	std::cout << "hp=" << b.gethp() << " energy=" << b.getenergy() << " attack="
	<< b.getattack() << std::endl;
	std::cout << "hp=" << c.gethp() << " energy=" << c.getenergy() << " attack="
	<< c.getattack() << std::endl;
	a.takeDamage(100);
	b.takeDamage(20);
	std::cout << a.gethp() << std::endl;
	std::cout << b.gethp() << std::endl;
	c.highFivesGuys();
	std::cout << std::endl;
	return (0);
}
