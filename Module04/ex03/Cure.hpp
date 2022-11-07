/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:01:22 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/02 18:01:24 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		// Constructor & Destructor
		Cure(void);
		Cure(const Cure &copy);
		virtual ~Cure();
		Cure	&operator=(const Cure &copy);

		// Function
		AMateria	*clone(void) const;
		void 		use(ICharacter& target);
};

#endif
