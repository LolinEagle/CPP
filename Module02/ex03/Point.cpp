/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:43:27 by frrusso           #+#    #+#             */
/*   Updated: 2022/10/25 13:43:29 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point::Point(const Point &point)
{
	*this = point;
}

Point::~Point()
{
}

Point	&Point::operator=(const Point &point)
{
	this->_x = point.getx();
	this->_y = point.gety();
	return (*this);
}

int	Point::getx(void) const
{
	return (this->_x.toFloat());
}

int	Point::gety(void) const
{
	return (this->_y.toFloat());
}
