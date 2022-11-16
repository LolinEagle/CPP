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

#include "MyClass.hpp"

int	main(void)
{
	MyClass	a;
	MyClass	b(a);
	
	for (int i = 0; i < 12; i++)
	{
		std::cout << RED << "Ar" << YELLOW << "c-" << GREEN << "en" << CYAN <<
		"-c" << BLUE << "ie" << MAGENTA << "l!" << RESET << std::endl;
	}
	return (0);
}
