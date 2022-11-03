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
	std::cout << "MateriaSource : Default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "MateriaSource : Copy constructor called" << std::endl;
	*this = copy;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource : Default destructor called" << std::endl;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{
	std::cout << "MateriaSource : Assignment operator called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_items[i] = copy._items[i];
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *type)
{
	static int	i = 0;

	if (i < 4)
		return ;
	this->_items[i] = type;
	i++;
}

// • createMateria(std::string const &)
// Retourne une nouvelle Materia. Celle-ci est une copie de celle apprise
// précédemment par la MateriaSource et dont le type est le même que celui passé
// en paramètre. Retourne 0 si le type est inconnu.
// AMateria	*MateriaSource::createMateria(std::string const & type)
// {

// }
