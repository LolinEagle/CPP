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

#define VECTOR_ITERATOR std::vector<size_t>::iterator

class Span
{
	private:
		// Data
		std::vector<size_t>	_tab;
		VECTOR_ITERATOR		_it;
		size_t				_N;
	public:
		// Constructor & Destructor
		Span(void);
		Span(size_t N);
		Span(const Span &copy);
		~Span();

		// Operator overload
		Span	&operator=(const Span &copy);

		// Exception
		class OutOfVector : public std::exception
		{
			const char	*what() const throw ()
			{
				return ("Error : Out of vector.");
			}
		};
		class ComparisonNotPossible : public std::exception
		{
			const char	*what() const throw ()
			{
				return ("Error : Comparison not possible.");
			}
		};
		
		// Function
		void	addNumber(size_t N);
		size_t	shortestSpan(void) const;
		size_t	longestSpan(void) const;
		size_t	getTab(size_t i) const;
		void	addMultipleNumber(VECTOR_ITERATOR start, VECTOR_ITERATOR final);
};

#endif
