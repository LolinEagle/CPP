/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:11:40 by frrusso           #+#    #+#             */
/*   Updated: 2023/03/16 12:11:44 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RPN.hpp>

bool	RPN::isoperation(char c)
{
	if (c == '+' || c == '-' || c == '/' || c == '*')
		return (true);
	return (false);
}

bool	RPN::isnext(char c)
{
	if (c == ' ' || c == '\0')
		return (true);
	return (false);
}

void	RPN::clear(void)
{
	while (_numbers.size())
		_numbers.pop();
	while (_operators.size())
		_operators.pop();
}

RPN::RPN(void)
{
}

RPN::RPN(char *str)
{
	std::stack<char>	tmp_numbers;
	std::stack<char>	tmp_operators;

	for (int i = 0; str[i]; i++)
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == '\0')
			break ;
		if ((isdigit(str[i]) || isoperation(str[i])) && isnext(str[i + 1]))
		{
			if (isdigit(str[i]))
				tmp_numbers.push(str[i]);
			else if (isoperation(str[i]))
				tmp_operators.push(str[i]);
		}
		else
		{
			std::cout << RED << "Error : bad argument : " << str[i] << RESET;
			return ;
		}
	}
	if (tmp_numbers.size() < 2)
	{
		std::cout << RED << "Error : not enough numbers" << RESET;
		return ;
	}
	if (tmp_numbers.size() != tmp_operators.size() + 1)
	{
		std::cout << RED << "Error : too many numbers or operators" << RESET;
		return ;
	}
	while (tmp_numbers.size())
	{
		_numbers.push(tmp_numbers.top());
		tmp_numbers.pop();
	}
	while (tmp_operators.size())
	{
		_operators.push(tmp_operators.top());
		tmp_operators.pop();
	}
}

RPN::RPN(const RPN &copy)
{
	*this = copy;
}

RPN	&RPN::operator=(const RPN &copy)
{
	_numbers = copy._numbers;
	_operators = copy._operators;
	return (*this);
}

RPN::~RPN()
{
}

int	RPN::execute(void)
{
	if (_numbers.size() < 2 || _numbers.size() != _operators.size() + 1)
		return (0);
	int		number_one = _numbers.top() - '0';
	_numbers.pop();
	int		number_two;
	char	operation;
	while (_numbers.size())
	{
		number_two = _numbers.top() - '0';
		_numbers.pop();
		operation = _operators.top();
		_operators.pop();
		if (operation == '+')
			number_one = number_one + number_two;
		if (operation == '-')
			number_one = number_one - number_two;
		if (operation == '/' && number_two == 0)
		{
			std::cout << RED << "Error : Division by zero." << BLUE <<
			std::endl;
			return (number_one);
		}
		else if (operation == '/')
			number_one = number_one / number_two;
		if (operation == '*')
			number_one = number_one * number_two;
	}
	return (number_one);
}
