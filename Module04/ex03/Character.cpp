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
	std::cout << "Character : Default constructor called" << std::endl;
}

Character::Character(std::string str)
{
	std::cout << "Character : String constructor called" << std::endl;
	this->_name = str;
}

Character::Character(const Character &copy)
{
	std::cout << "Character : Copy constructor called" << std::endl;
	*this = copy;
}

Character::~Character()
{
	std::cout << "Character : Default destructor called" << std::endl;
}

Character	&Character::operator=(const Character &copy)
{
	std::cout << "Character : Assignment operator called" << std::endl;
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
		this->_items[i] = copy._items[i];
	return (*this);
}
