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
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	ClapTrap::_name = "_clap_name";
	this->_energy = 50;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap String constructor called" << std::endl;
	this->_name = name;
	ClapTrap::_name = _name + "_clap_name";
	this->_energy = 50;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamond) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	// ClapTrap::_name = this->_name + "_clap_name";
	// *this = diamond;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamond)
{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	this->_name = diamond.getname();
	this->_hp = diamond.gethp();
	this->_energy = diamond.getenergy();
	this->_attack = diamond.getattack();
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	// Cette fonction membre affichera à la fois son nom et le nom de son sous-objet ClapTrap.
}
