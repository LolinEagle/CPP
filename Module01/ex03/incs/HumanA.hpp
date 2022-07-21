/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:08:10 by frrusso           #+#    #+#             */
/*   Updated: 2022/07/21 17:08:14 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon		gun;
		std::string	name;
	public:
		void	attack(void);
		void	setWeapon(Weapon gun);
		HumanA(std::string name, Weapon gun);
		~HumanA(void);
};

#endif
