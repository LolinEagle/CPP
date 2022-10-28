/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:28:28 by frrusso           #+#    #+#             */
/*   Updated: 2022/10/28 13:28:31 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->_hp = 100;
	this->_energy = 100;
	this->_attack = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap String constructor called" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_energy = 100;
	this->_attack = 30;
}

FragTrap::FragTrap(const FragTrap &frag) : ClapTrap(frag)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &frag)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	this->_name = frag.getname();
	this->_hp = frag.gethp();
	this->_energy = frag.getenergy();
	this->_attack = frag.getattack();
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	if (this->_hp == 0 || this->_energy == 0)
		return ; 
	std::cout << "FragTrap " << this->_name << " attacks " << target <<
	", causing " << this->_attack << " points of damage!" << std::endl;
	this->_energy--;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " want high fives !" << std::endl;
}
