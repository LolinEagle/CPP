/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:54:33 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/02 17:54:35 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria : Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria : String constructor called" << std::endl;
	this->_type = type;
}

AMateria::AMateria(const AMateria &copy)
{
	std::cout << "AMateria : Copy constructor called" << std::endl;
	*this = copy;
}

AMateria::~AMateria()
{
	std::cout << "AMateria : Default destructor called\n" << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &copy)
{
	std::cout << "Ice : Assignment operator called" << std::endl;
	this->_type = copy._type;
	return (*this);
}

std::string const &AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	if (this->_type == "ice")
		std::cout << "Ice : \"* shoots an ice bolt at " << target.getName() <<
		" *\"" << std::endl;
	else if (this->_type == "cure")
		std::cout << "Cure : \"* heals " << target.getName() <<
		"\'s wounds *\"" << std::endl;
	else
		std::cout << this->_type << " : \"* is a wrong spell *\"" << std::endl;
}
