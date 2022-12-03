/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyClass.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:14:22 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/16 14:14:24 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MyClass.hpp>

MyClass::MyClass(void)
{
	std::cout << BLUE << "MyClass : Default Constructor called" << RESET << std::endl;
}

MyClass::MyClass(const MyClass &copy)
{
	std::cout << BLUE << "MyClass : Copy Constructor called" << RESET << std::endl;
	*this = copy;
}

MyClass::~MyClass()
{
	std::cout << RED << "MyClass : Destructor called" << RESET << std::endl;
}

MyClass	&MyClass::operator=(const MyClass &copy)
{
	(void)copy;
	return (*this);
}
