/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:31:48 by frrusso           #+#    #+#             */
/*   Updated: 2022/10/29 12:31:49 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	_type;

		// Constructor & Destructor
		Animal(void);
		Animal(const Animal &copy);
		virtual ~Animal();
		Animal	&operator=(const Animal &copy);

		// Function
		std::string	getType(void) const;
		void		makeSound(void) const;
};

#endif
