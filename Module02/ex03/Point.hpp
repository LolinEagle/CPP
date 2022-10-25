/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:43:34 by frrusso           #+#    #+#             */
/*   Updated: 2022/10/25 13:43:36 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed	_x;
		Fixed	_y;
	public:
		// Constructor & Destructor
		Point(void);
		Point(const float x, const float y);
		Point(const Point &point);
		~Point();

		// Operator overload
		Point	&operator=(const Point &point);

		// Function
		int	getx(void) const;
		int	gety(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
