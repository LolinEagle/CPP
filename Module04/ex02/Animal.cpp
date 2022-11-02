/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:31:32 by frrusso           #+#    #+#             */
/*   Updated: 2022/10/29 12:31:34 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal : Default constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal : Copy constructor called" << std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Animal : Default destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &copy)
{
	std::cout << "Animal : Assignment operator called" << std::endl;
	this->_type = copy._type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void		Animal::makeSound(void) const
{
	if (this->_type == "Dog")
		std::cout << "Wouf" << std::endl;
	else if (this->_type == "Cat")
		std::cout << "Miaou" << std::endl;
	else
		std::cout << "*Animal noices*" << std::endl;
}
