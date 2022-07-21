/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:09:15 by frrusso           #+#    #+#             */
/*   Updated: 2022/07/21 17:09:17 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	HumanA::attack(void)
{
	std::cout << this->name << "attacks with their" << this->gun.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon gun)
{
	this->gun = gun;
}

HumanA::HumanA(std::string name, Weapon gun)
{
	this->name = name;
	this->gun = gun;
}

HumanA::~HumanA(void)
{
}
