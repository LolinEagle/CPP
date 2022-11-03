/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:01:06 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/02 18:01:09 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	std::cout << "Ice : Default constructor called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(const Ice &copy)
{
	std::cout << "Ice : Copy constructor called" << std::endl;
	*this = copy;
}

Ice::~Ice()
{
	std::cout << "Ice : Default destructor called" << std::endl;
}

Ice	&Ice::operator=(const Ice &copy)
{
	std::cout << "Ice : Assignment operator called" << std::endl;
	this->_type = copy._type;
	return (*this);
}

AMateria	*Ice::clone() const
{
	AMateria	*tmp = new Ice();

	return (tmp);
}
