/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:20:27 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/03 13:20:30 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource : Default constructor called\n" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_items[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "MateriaSource : Copy constructor called" << std::endl;
	*this = copy;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource : Default destructor called\n" << std::endl;
	for (int i = 0; i < 4; i++)
		delete (this->_items[i]);
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{
	std::cout << "MateriaSource : Assignment operator called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_items[i] = copy._items[i];
	return (*this);
}

void	MateriaSource::printItems()
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

void	MateriaSource::learnMateria(AMateria *type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_items[i] == NULL)
		{
			this->_items[i] = type;
			return ;
		}
	}
	delete (type);
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_items[i]->getType() == type)
			return (this->_items[i]->clone());
	}
	return (NULL);
}
