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

template<typename T>
void	swap(T &x, T &y)
{
	T	z = x;
	x = y;
	y = z;
}

template<typename T>
T	min(T x, T y)
{
	if (y < x || y == x)
		return (y);
	else
		return (x);
}

template<typename T>
T	max(T x, T y)
{
	if (y > x || y == x)
		return (y);
	else
		return (x);
}

#endif
