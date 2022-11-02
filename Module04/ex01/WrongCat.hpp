/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:46:14 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/02 14:46:16 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		// Constructor & Destructor
		WrongCat(void);
		WrongCat(const WrongCat &copy);
		~WrongCat();
		WrongCat	&operator=(const WrongCat &copy);
};

#endif
