/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:20:21 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/03 13:20:22 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <iostream>

class AMateria;

class IMateriaSource
{
	public:
		// Constructor & Destructor
		virtual ~IMateriaSource() {}

		// Function
		virtual void		printItems() = 0;
		virtual void		learnMateria(AMateria *type) = 0;
		virtual AMateria	*createMateria(std::string const &type) = 0;
};

#endif
