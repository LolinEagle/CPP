/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:11:01 by frrusso           #+#    #+#             */
/*   Updated: 2022/10/29 12:11:03 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void	main1(void)
{
	std::cout << "- Main 1 -"<< std::endl;
	Animal	*i[4];

	i[0] = new Dog();
	i[1] = new Cat();
	i[2] = new Dog();
	i[3] = new Cat();
	std::cout << std::endl;
	for (int j = 0; j < 4; j++)
		delete(i[j]);
	std::cout << std::endl;
}

void	main2(void)
{
	std::cout << "- Main 2 -"<< std::endl;
	Dog	*a = new Dog();
	Cat	*b = new Cat();
	Dog	*c = new Dog(*a);
	Cat	*d = new Cat(*b);

	std::cout << std::endl;
	a->makeSound();
	b->makeSound();
	std::cout << std::endl;
	delete(a);
	delete(b);
	std::cout << std::endl;
	c->makeSound();
	d->makeSound();
	std::cout << std::endl;
	delete(c);
	delete(d);
	std::cout << std::endl;
}

int	main(void)
{
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << std::endl;
	i->makeSound();
	j->makeSound();
	std::cout << std::endl;
	delete(j);
	delete(i);
	std::cout << std::endl;
	main1();
	main2();
	return (0);
}
