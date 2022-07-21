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

class HumanB
{
	private:
		Weapon		gun;
		std::string	name;
	public:
		void	attack(void);
		void	setWeapon(Weapon gun);
		HumanB(std::string name);
		~HumanB(void);
};
