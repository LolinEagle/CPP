/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:37:35 by frrusso           #+#    #+#             */
/*   Updated: 2022/10/29 12:37:39 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;
	public:
		// Constructor & Destructor
		Dog(void);
		Dog(const Dog &copy);
		~Dog();
		Dog	&operator=(const Dog &copy);

		// Function
		void	makeSound(void) const;
};

#endif
