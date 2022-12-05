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
	if (_it == _tab.end())
		throw (OutOfVector());
	*_it = N;
	_it++;
}

size_t	Span::shortestSpan(void) const
{
	if (_N < 2)
		throw (ComparisonNotPossible());
	std::vector<size_t>	_tabCopy(_tab);
	std::sort(_tabCopy.begin(), _tabCopy.end());
	size_t	res = _tabCopy[1] - _tabCopy[0];
	for (size_t i = 2; i < _N; i++)
	{
		if (res > _tabCopy[i] - _tabCopy[i - 1])
			res = _tabCopy[i] - _tabCopy[i - 1];
	}
	return (res);
}

size_t	Span::longestSpan(void) const
{
	if (_N < 2)
		throw (ComparisonNotPossible());
	std::vector<size_t>	_tabCopy(_tab);
	std::sort(_tabCopy.begin(), _tabCopy.end());
	return (_tabCopy.back() - _tabCopy.front());
}

size_t	Span::getTab(size_t i) const
{
	if (i >= _N)
		throw (OutOfVector());
	return (_tab[i]);
}

void	Span::addMultipleNumber(VECTOR_ITERATOR start, VECTOR_ITERATOR final)
{
	for (VECTOR_ITERATOR it = start; it < final; it++)
	{
		if (_it == _tab.end())
			throw (OutOfVector());
		*_it = *it;
		_it++;
	}
}
