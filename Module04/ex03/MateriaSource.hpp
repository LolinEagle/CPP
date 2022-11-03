/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:26:15 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/03 13:26:17 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_items[4];
	public:
		// Constructor & Destructor
		MateriaSource(void);
		MateriaSource(const MateriaSource &copy);
		virtual ~MateriaSource();
		MateriaSource	&operator=(const MateriaSource &copy);
		
		// Function
		void		learnMateria(AMateria *type);
		// AMateria	*createMateria(std::string const & type);
};

#endif
