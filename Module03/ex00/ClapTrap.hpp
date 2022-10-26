/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:11:23 by frrusso           #+#    #+#             */
/*   Updated: 2022/10/26 14:11:25 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_energy;
		unsigned int	_attack;
	public:
		// Constructor & Destructor
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &clap);
		~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &clap);

		// Getter & Setter Function
		std::string		getname(void) const;
		unsigned int	gethp(void) const;
		unsigned int	getenergy(void) const;
		unsigned int	getattack(void) const;
		void			setname(std::string name);
		void			sethp(unsigned int amount);
		void			setenergy(unsigned int amount);
		void			setattack(unsigned int amount);
		
		// Function
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif
