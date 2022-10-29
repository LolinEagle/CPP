/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:11:38 by frrusso           #+#    #+#             */
/*   Updated: 2022/10/26 14:11:40 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hp(10), _energy(10), _attack(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _energy(10), _attack(0)
{
	std::cout << "String constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = clap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called\n" << std::endl;
}	

ClapTrap	&ClapTrap::operator=(const ClapTrap &clap)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = clap.getname();
	this->_hp = clap.gethp();
	this->_energy = clap.getenergy();
	this->_attack = clap.getattack();
	return (*this);
}

std::string	ClapTrap::getname(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::gethp(void) const
{
	return (this->_hp);
}

unsigned int	ClapTrap::getenergy(void) const
{
	return (this->_energy);
}

unsigned int	ClapTrap::getattack(void) const
{
	return (this->_attack);
}

void	ClapTrap::setname(std::string name)
{
	this->_name = name;
}

void	ClapTrap::sethp(unsigned int amount)
{
	this->_hp = amount;
}

void	ClapTrap::setenergy(unsigned int amount)
{
	this->_energy = amount;
}

void	ClapTrap::setattack(unsigned int amount)
{
	this->_attack = amount;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hp == 0 || this->_energy == 0)
		return ; 
	std::cout << "ClapTrap " << this->_name << " attacks " << target <<
	", causing " << this->_attack << " points of damage!" << std::endl;
	this->_energy--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << this->_name << " is already break." << std::endl;
		return ;
	}
	std::cout << this->_name << " take " << amount <<
	" points of damage." << std::endl;
	if (amount > this->_hp)
		this->_hp = 0;
	else
		this->_hp -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp == 0 || this->_energy == 0)
		return ;
	std::cout << this->_name << " repaired " << amount <<
	" points of damage." << std::endl; 
	this->_hp += amount;
	this->_energy--;
}
