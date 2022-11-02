/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:36:41 by frrusso           #+#    #+#             */
/*   Updated: 2022/10/29 12:36:43 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat : Default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat : Copy constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Cat : Default destructor called" << std::endl;
	delete(_brain);
}

Cat	&Cat::operator=(const Cat &copy)
{
    std::cout << "Cat : Assignment operator called" << std::endl;
	this->_type = copy._type;
	this->_brain = copy._brain;
	return (*this);
}
