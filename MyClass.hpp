/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyClass.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:14:34 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/16 14:14:36 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYCLASS_HPP
#define MYCLASS_HPP

#include "header.hpp"

class MyClass
{
	private:
		// Data
	public:
		// Constructor & Destructor
		MyClass(void);
		MyClass(const MyClass &copy);
		~MyClass();

		// Operator overload
		MyClass	&operator=(const MyClass &copy);
		
		// Function
};

#endif
