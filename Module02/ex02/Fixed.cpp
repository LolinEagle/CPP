/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:03:23 by frrusso           #+#    #+#             */
/*   Updated: 2022/10/21 12:03:25 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_bits = 8;

Fixed::Fixed(void) : _raw(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int raw)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_raw = raw << _bits;
}

Fixed::Fixed(const float raw)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_raw = roundf(raw * (1 << _bits));
}

Fixed::Fixed(const Fixed &fixed)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->_raw = fixed.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed &fixed) const
{
	if (this->_raw > fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(const Fixed &fixed) const
{
	if (this->_raw < fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(const Fixed &fixed) const
{
	if (this->_raw >= fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(const Fixed &fixed) const
{
	if (this->_raw <= fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(const Fixed &fixed) const
{
	if (this->_raw == fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(const Fixed &fixed) const
{
	if (this->_raw != fixed.getRawBits())
		return (true);
	else
		return (false);
}

Fixed	Fixed::operator+(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed	&Fixed::operator++(void)
{
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (this->_raw);
}

void	Fixed::setRawBits(int const raw)
{
	this->_raw = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_raw / (1 << _bits));
}

int		Fixed::toInt(void) const
{
	return (this->_raw >> _bits);
}

Fixed	Fixed::min(Fixed &f1, Fixed &f2)
{
	(void)f1;
	(void)f2;
	return (f1);
}

Fixed	Fixed::min(const Fixed &f1, const Fixed &f2)
{
	(void)f1;
	(void)f2;
	return (f1);
}

Fixed	Fixed::max(Fixed &f1, Fixed &f2)
{
	(void)f1;
	(void)f2;
	return (f1);
}

Fixed	Fixed::max(const Fixed &f1, const Fixed &f2)
{
	(void)f1;
	(void)f2;
	return (f1);
}

std::ostream	&operator<<(std::ostream &stream, const Fixed &object)
{
	stream << object.toFloat();
	return (stream);
}
