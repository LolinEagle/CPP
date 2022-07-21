/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:08:59 by frrusso           #+#    #+#             */
/*   Updated: 2022/07/21 17:09:01 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	Weapon::getType() const
{
	return (this->type);
}

void		Weapon::setType(std::string new_type)
{
	this->type = new_type;
}

Weapon::Weapon(std::string new_type)
{
	this->type = new_type;
}

Weapon::~Weapon()
{
}
