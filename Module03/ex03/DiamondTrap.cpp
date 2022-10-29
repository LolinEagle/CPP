/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:50:18 by frrusso           #+#    #+#             */
/*   Updated: 2022/10/28 13:50:21 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap Default constructor called\n" << std::endl;
	ClapTrap::_name = "_clap_name";
	this->_energy = 50;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap String constructor called\n" << std::endl;
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_energy = 50;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamond)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = diamond;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamond)
{
	std::cout << "DiamondTrap Copy assignment operator called\n" << std::endl;
	this->_name = diamond._name;
	ClapTrap::_name = diamond.getname();
	this->_hp = diamond.gethp();
	this->_energy = diamond.getenergy();
	this->_attack = diamond.getattack();
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "name=\"" << this->_name << "\" ClapTrap name=\"" <<
	ClapTrap::_name << "\"" << std::endl;
}
