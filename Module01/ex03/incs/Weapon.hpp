/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:07:44 by frrusso           #+#    #+#             */
/*   Updated: 2022/07/21 17:07:46 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <stdlib.h>

class Weapon
{
	private:
		std::string	type;
	public:
		std::string	getType() const;
		void		setType(std::string new_type);
		Weapon(std::string new_type);
		~Weapon();
};

#endif
