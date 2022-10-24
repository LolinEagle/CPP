/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:02:56 by frrusso           #+#    #+#             */
/*   Updated: 2022/10/21 12:02:58 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	// a = Fixed(16);
	// Fixed		b(8);
	// Fixed		c;
	// c = a + b;
	// std::cout << c << std::endl;

	std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	// std::cout << Fixed::max(a, b) << std::endl;
	return (0);
}
