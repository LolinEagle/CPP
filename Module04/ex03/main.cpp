/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:44:25 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/02 17:44:27 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

void	main1(IMateriaSource *src, ICharacter *me)
{
	AMateria	*tmp;

	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->printItems();
	me->use(0, *me);
	me->use(1, *me);
	me->use(2, *me);
	std::cout << std::endl;
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
}

int	main(void)
{
	IMateriaSource	*src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->printItems();

	ICharacter	*me = new Character("frrusso");

	main1(src, me);

	ICharacter	*bob = new Character("bob lennon");
	
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;
	delete (bob);
	delete (me);
	delete (src);
	return (0);
}
