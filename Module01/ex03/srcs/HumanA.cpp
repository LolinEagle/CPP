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

#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << this->name << "attacks with their " <<
	this->weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon), name(name)
{
}

HumanA::~HumanA(void)
{
}
