/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:28:18 by frrusso           #+#    #+#             */
/*   Updated: 2022/10/28 13:28:21 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		// Constructor & Destructor
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &frag);
		~FragTrap();
		FragTrap	&operator=(const FragTrap &frag);
		
		// Function
		void	attack(const std::string& target);
		void	highFivesGuys(void);
};

#endif
