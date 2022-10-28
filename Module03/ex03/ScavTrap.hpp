/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:03:01 by frrusso           #+#    #+#             */
/*   Updated: 2022/10/26 18:03:03 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		// Constructor & Destructor
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &scav);
		~ScavTrap();
		ScavTrap	&operator=(const ScavTrap &scav);
		
		// Function
		void	attack(const std::string& target);
		void	guardGate(void);
};

#endif
