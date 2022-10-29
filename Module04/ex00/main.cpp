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

void	main1(void)
{
	const Animal	*a = new Animal();
	const Animal	*b = new Dog();
	const Animal	*c = new Cat();

	std::cout << b->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	c->makeSound();
	b->makeSound();
	a->makeSound();
	delete(a);
	delete(b);
	delete(c);
}

int	main(void)
{
	Animal	a;
	Dog		b;
	Cat		c;
	Animal	a1(a);
	Dog		b1(b);
	Cat		c1(c);
	
	std::cout << std::endl;
	a = a1;
	b = b1;
	c = c1;
	std::cout << std::endl;
	// main1();
	std::cout << std::endl;
	return (0);
}