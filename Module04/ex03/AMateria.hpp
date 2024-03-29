/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:54:28 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/02 17:54:30 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	_type;
	public:
		// Constructor & Destructor
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria &copy);
		virtual ~AMateria();
		AMateria	&operator=(const AMateria &copy);

		// Function
		std::string const	&getType(void) const;
		virtual AMateria*	clone(void) const = 0;
		virtual void 		use(ICharacter& target);
};

#endif
