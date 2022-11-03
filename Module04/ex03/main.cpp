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

int	main(void)
{
	IMateriaSource	*src = new MateriaSource();

	src->learnMateria(new Ice());// Leak
	src->learnMateria(new Cure());// Leak

	ICharacter	*me = new Character("me");
	AMateria	*tmp;

	(void)tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);

	// ICharacter* bob = new Character("bob");
	
	// me->use(0, *bob);
	// me->use(1, *bob);
	// delete (bob);
	delete (me);
	delete (src);
	return (0);
}
