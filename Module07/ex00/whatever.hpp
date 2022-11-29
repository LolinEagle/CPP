/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:12:18 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/28 16:12:20 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include "header.hpp"

// • swap : Intervertit les valeurs de deux arguments donnés. Ne retourne rien.
template<typename T>
void	swap(T &x, T &y)
{
	T	z = x;
	x = y;
	y = z;
}

// • min : Compare les deux valeurs passées en argument et retourne la plus petite des deux.
// Si les deux sont équivalentes, alors retourne la seconde.
template<typename T>
T	min(T x, T y)
{
	if (y < x || y == x)
		return (y);
	else
		return (x);
}

// • max : Compare les deux valeurs passées en argument et retourne la plus grande des deux.
// Si les deux sont équivalentes, alors retourne la seconde.
template<typename T>
T	max(T x, T y)
{
	if (y > x || y == x)
		return (y);
	else
		return (x);
}

#endif
