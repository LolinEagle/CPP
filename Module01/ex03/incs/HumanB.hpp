/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:08:30 by frrusso           #+#    #+#             */
/*   Updated: 2022/07/21 17:08:32 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon		*weapon;
		std::string	name;
	public:
		void	attack(void);
		void	setWeapon(Weapon &weapon);
		HumanB(std::string name);
		~HumanB(void);
};

#endif
