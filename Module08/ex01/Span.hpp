/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:27:51 by frrusso           #+#    #+#             */
/*   Updated: 2022/12/03 15:27:54 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <header.hpp>

class Span
{
	private:
		// Data
		std::vector<size_t>				_tab;
		std::vector<size_t>::iterator	_it;
		size_t							_N;
	public:
		// Constructor & Destructor
		Span(void);
		Span(size_t N);
		Span(const Span &copy);
		~Span();

		// Operator overload
		Span	&operator=(const Span &copy);
		
		// Function
		void	addNumber(size_t N);
		size_t	shortestSpan(void);
		size_t	longestSpan(void);
		size_t	getTab(size_t i);
};

#endif
