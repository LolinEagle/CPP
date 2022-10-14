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

#include "HumanB.hpp"

void	HumanB::attack()
{
	std::cout << this->name << "attacks with their " <<
	this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

HumanB::HumanB(std::string name) : weapon(NULL), name(name)
{
}

HumanB::~HumanB()
{
}
