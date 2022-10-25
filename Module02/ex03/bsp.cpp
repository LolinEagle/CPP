/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:44:35 by frrusso           #+#    #+#             */
/*   Updated: 2022/10/25 13:44:37 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	bsp_area(float ax, float ay, float bx, float by, float cx, float cy)
{
	float	tmp;

	tmp = roundf((ax * (by - cy) + bx * (cy - ay) + cx * (ay - by)) / 2);
	if (tmp < 0)
		return (-tmp);
	return (tmp);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	int		res;
	float	abc, pab, pbc, pac;

	std::cout << "a is on x=" << a.getx() << " y=" << a.gety() << std::endl;
	std::cout << "b is on x=" << b.getx() << " y=" << b.gety() << std::endl;
	std::cout << "c is on x=" << c.getx() << " y=" << c.gety() << std::endl;
	std::cout << "p is on x=" << point.getx() << " y=" << point.gety() << std::endl;
	abc = bsp_area(a.getx(), a.gety(), b.getx(), b.gety(), c.getx(), c.gety());
	std::cout << "area of abc is " << abc << std::endl;
	pab = bsp_area(point.getx(), point.gety(), a.getx(), a.gety(), b.getx(), b.gety());
	std::cout << "area of pab is " << pab << std::endl;
	pbc = bsp_area(point.getx(), point.gety(), b.getx(), b.gety(), c.getx(), c.gety());
	std::cout << "area of pbc is " << pbc << std::endl;
	pac = bsp_area(point.getx(), point.gety(), a.getx(), a.gety(), c.getx(), c.gety());
	std::cout << "area of pac is " << pac << std::endl;
	res = true;
	if (abc != pab + pbc + pac || pab == 0 || pbc == 0 || pac == 0)
		res = false;
	if (res)
		std::cout << "Your point is in triangle" << std::endl;
	else
		std::cout << "Your point is not in triangle" << std::endl;
	return (res);
}
