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

int	main(void)
{
	const Dog	*j = new Dog();
	const Cat	*i = new Cat();

	std::cout << std::endl;
	std::cout << j->getType() << std::endl;
	j->makeSound();
	std::cout << i->getType() << std::endl;
	i->makeSound();
	std::cout << std::endl;
	delete(j);
	delete(i);
	return (0);
}