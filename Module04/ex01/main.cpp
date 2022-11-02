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
	const Animal	*i[4];

	i[0] = new Dog();
	i[1] = new Dog();
	i[2] = new Cat();
	i[3] = new Cat();
	std::cout << std::endl;
	delete(i[0]);
	delete(i[1]);
	delete(i[2]);
	delete(i[3]);
	std::cout << std::endl;
}

int	main(void)
{
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << std::endl;
	delete(j);
	delete(i);
	std::cout << std::endl;
	main1();
	return (0);
}