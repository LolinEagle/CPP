/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:37:15 by frrusso           #+#    #+#             */
/*   Updated: 2022/10/29 12:37:29 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog : Default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog : Copy constructor called" << std::endl;
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Dog : Default destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &copy)
{
    std::cout << "Dog : Assignment operator called" << std::endl;
	this->_type = copy._type;
	return (*this);
}
