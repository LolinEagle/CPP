/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:13:16 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/16 14:13:18 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.hpp>

#define SIZE 8

int	main(void)
{
	std::vector<int> first;
  	std::vector<int> second(SIZE);

	for (size_t i = 0; i < SIZE; i++)
		second[i] = i + 1;
	for (size_t i = 0; i < SIZE; i++)
		std::cout << "second[" << i << "]=" << second[i] << std::endl;
	try
	{
		easyfind(second, 3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
