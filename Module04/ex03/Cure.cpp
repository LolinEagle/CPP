/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:01:33 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/02 18:01:34 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	std::cout << "Cure : Default constructor called\n" << std::endl;
	this->_type = "cure";
}

Cure::Cure(const Cure &copy)
{
	std::cout << "Cure : Copy constructor called" << std::endl;
	*this = copy;
}

Cure::~Cure()
{
	std::cout << "Cure : Default destructor called" << std::endl;
}

Cure	&Cure::operator=(const Cure &copy)
{
	std::cout << "Cure : Assignment operator called" << std::endl;
	this->_type = copy._type;
	return (*this);
}

AMateria	*Cure::clone() const
{
	AMateria	*tmp = new Cure();

	return (tmp);
}
