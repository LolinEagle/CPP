/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:27:45 by frrusso           #+#    #+#             */
/*   Updated: 2022/12/03 15:27:47 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

Span::Span(void) : _tab(std::vector<size_t>()), _it(_tab.begin()), _N(0)
{
	std::cout << BLUE << "Span : Default Constructor called" << RESET << std::endl;
}

Span::Span(size_t N) : _tab(std::vector<size_t>(N)), _it(_tab.begin()), _N(N)
{
	std::cout << BLUE << "Span : Size_t Constructor called" << RESET << std::endl;
}

Span::Span(const Span &copy)
{
	std::cout << BLUE << "Span : Copy Constructor called" << RESET << std::endl;
	*this = copy;
}

Span::~Span()
{
	std::cout << RED << "Span : Destructor called" << RESET << std::endl;
}

Span	&Span::operator=(const Span &copy)
{
	_tab = copy._tab;
	_it = copy._it;
	_N = copy._N;
	return (*this);
}

void	Span::addNumber(size_t N)
{
	*_it = N;
	_it++;
}

size_t	Span::shortestSpan(void)
{
	std::sort(_tab.begin(), _tab.end());
	if (_tab.size() < 2)
		throw (std::exception());
	return (0);
}

size_t	Span::longestSpan(void)
{
	std::sort(_tab.begin(), _tab.end());
	if (_tab.size() < 2)
		throw (std::exception());
	return (_tab[_N - 1] - _tab[0]);
}

size_t	Span::getTab(size_t i)
{
	if (i >= _N)
		throw (std::exception());
	return (_tab[i]);
}
