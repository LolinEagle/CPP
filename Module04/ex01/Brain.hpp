/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:30:34 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/02 15:30:36 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		// Constructor & Destructor
		Brain(void);
		Brain(const Brain &copy);
		virtual ~Brain();
		Brain	&operator=(const Brain &copy);
};

#endif
