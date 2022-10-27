/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:02:52 by frrusso           #+#    #+#             */
/*   Updated: 2022/10/26 18:02:54 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : _hp(100), _energy(50), _attack(20)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _name(name), _hp(100), _energy(50), _attack(20)
{
	std::cout << "ScavTrap String constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = scav;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &scav)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	this->_name = scav.getname();
	this->_hp = scav.gethp();
	this->_energy = scav.getenergy();
	this->_attack = scav.getattack();
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hp == 0 || this->_energy == 0)
		return ; 
	std::cout << "ScavTrap " << this->_name << " attacks " << target <<
	", causing " << this->_attack << " points of damage!" << std::endl;
	this->_energy--;
}

