/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:24:54 by frrusso           #+#    #+#             */
/*   Updated: 2022/07/20 17:25:03 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <stdlib.h>

class Zombie
{
	private:
		std::string	name;
	public:
		void	announce(void);
		void	setName(std::string name);
		~Zombie();
};

Zombie*	zombieHorde(int N, std::string name);

#endif
