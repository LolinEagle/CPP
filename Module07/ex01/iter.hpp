/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:39:52 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/29 13:40:18 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include "header.hpp"

template<typename T>
void	iter(T *tab, int size, void (*f)(T const &))
{
	for (int i = 0; i < size; i++)
	{
		f(tab[i]);
	}
}

#endif
