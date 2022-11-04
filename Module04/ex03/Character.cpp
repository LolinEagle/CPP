/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:03:25 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/02 18:03:27 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Character : Default constructor called\n" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_items[i] = NULL;
	this->_tmp = NULL;
}

Character::Character(std::string str)
{
	std::cout << "Character : String constructor called\n" << std::endl;
	this->_name = str;
	for (int i = 0; i < 4; i++)
		this->_items[i] = NULL;
	this->_tmp = NULL;
}

Character::Character(const Character &copy)
{
	std::cout << "Character : Copy constructor called" << std::endl;
	*this = copy;
}

Character::~Character()
{
	std::cout << "Character : Default destructor called\n" << std::endl;
	for (int i = 0; i < 4; i++)
		delete (this->_items[i]);
	delete (this->_tmp);
}

Character	&Character::operator=(const Character &copy)
{
	std::cout << "Character : Assignment operator called" << std::endl;
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
	{
		if (copy._items[i] != NULL)
			this->_items[i] = copy._items[i]->clone();
		else
			this->_items[i] = NULL;
	}
	this->_tmp = NULL;
	return (*this);
}

void	Character::printItems()
{
	for (int i = 0; i < 4; i++)
	{
		if (_items[i])
			std::cout << "AMateria" << i << ':' << _items[i]->getType() << std::endl;
		else
			std::cout << "AMateria" << i << ':' << std::endl;
	}
	std::cout << std::endl;
}

const std::string	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_items[i] == NULL)
		{
			this->_items[i] = m;
			return ;
		}
	}
	delete (m);
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_items[idx] != NULL)
	{
		delete (this->_tmp);
		this->_tmp = this->_items[idx];
		this->_items[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_items[idx] != NULL)
		this->_items[idx]->use(target);
	else
		std::cout << "\"* no spell *\"" << std::endl;
}
