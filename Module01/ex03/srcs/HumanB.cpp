/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:09:22 by frrusso           #+#    #+#             */
/*   Updated: 2022/07/21 17:09:25 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	HumanB::attack()
{
	std::cout << this->name << "attacks with their" << this->gun.getType();
    std::cout << std::endl;
}

void	HumanA::setWeapon(Weapon gun)
{
	this->gun = gun;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{
}
