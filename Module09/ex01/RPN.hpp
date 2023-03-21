/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:11:49 by frrusso           #+#    #+#             */
/*   Updated: 2023/03/16 12:11:53 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <cctype>
#include <list>
#include <stack>

#define RESET	"\033[0m" << std::endl
#define RED		"\033[31m"
#define BLUE	"\033[34m"

class RPN
{
	private:
		std::stack<char, std::list<char> >	_numbers;
		std::stack<char, std::list<char> >	_operators;

		bool	isoperation(char c);
		bool	isnext(char c);
		void	clear(void);
	public:
		RPN(void);
		RPN(char *str);
		RPN(const RPN &copy);
		RPN	&operator=(const RPN &copy);
		~RPN();

		int	execute(void);
};

#endif
