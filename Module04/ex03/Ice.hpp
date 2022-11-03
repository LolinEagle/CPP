/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:00:49 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/02 18:00:50 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		// Constructor & Destructor
		Ice(void);
		Ice(const Ice &copy);
		virtual ~Ice();
		Ice	&operator=(const Ice &copy);

		// Function
		AMateria	*clone() const;
};

#endif
