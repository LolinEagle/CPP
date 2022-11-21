/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:01:52 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/21 12:01:54 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void) : _c(0), _i(0), _f(0.0f), _d(0.0), _float(false)
{
}

Convert::Convert(const std::string str)
{
	// Debug Init
	*this = Convert();

	// Exepetion
	if (str.empty())
	{
		*this = Convert();
		return ;
	}
	else if (str == "+inff" || str == "+inf" || str == "nanf" ||
		str == "-inff" || str == "-inf" || str == "nan")
	{
		this->_float = true;
		// ICI
		std::cout << "exepetion" << std::endl;
		return ;
	}
	this->_float = false;

	// Type
	if (is_char(str))
	{
		// is char and not a string
		if (str.size() > 1)
		{
			std::cout << "Input is a string." << std::endl;
			*this = Convert();
			return ;
		}
		// ICI
		std::cout << "char" << std::endl;
		return ;
	}
	else if (is_int(str))
	{
		// ICI
		std::cout << "int" << std::endl;
	}
	else if (is_float(str))
	{
		// ICI
		std::cout << "float" << std::endl;
	}
	else// is_double
	{
		// ICI
		std::cout << "double" << std::endl;
	}
	*this = Convert();
}

Convert::Convert(const Convert &copy)
{
	*this = copy;
}

Convert::~Convert() 
{
}

Convert	&Convert::operator=(const Convert &copy)
{
	this->_c = copy._c;
	this->_i = copy._i;
	this->_f = copy._f;
	this->_d = copy._c;
	this->_float = copy._float;
	return (*this);
}

void	Convert::display(void)
{
	if (this->_float == true)
		std::cout << BLUE << "char: impossible" << RESET << std::endl;
	else if (isprint(this->_c))
		std::cout << BLUE << "char: " << this->_c << RESET << std::endl;
	else
		std::cout << BLUE << "char: Non displayable" << RESET << std::endl;
	if (this->_float == true)
		std::cout << BLUE << "int: impossible" << RESET << std::endl;
	else
		std::cout << BLUE << "int: " << this->_i << RESET << std::endl;
	std::cout.precision(1);
	std::cout << std::fixed << CYAN << "float: " << this->_f << 'f' << RESET << std::endl;
	std::cout << CYAN << "double: " << this->_d << RESET << std::endl;
}

bool	Convert::is_in_string(char c, const std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (c == str[i])
			return (true);
	}
	return (false);
}

bool	Convert::is_char(const std::string str)
{
	// 1 : Dont have number
	int	i;
	for (i = 0; str[i]; i++)
	{
		if (is_in_string(str[i], DIGIT))
			break ;
	}
	if (is_in_string(str[i], DIGIT) == false)
		return (true);

	// 2 : front = "+-" or number
	if (is_in_string(str[0], "+-0123456789") == false)
		return (true);

	// 3 : only one ".," (0.0) or number
	int	j = 0;
	for (i = 1; str[i + 1]; i++)
	{
		if (is_in_string(str[i], ".,"))
		{
			j++;
			if (j > 1 || i == 0)
				return (true);
			if (is_in_string(str[i - 1], DIGIT) == 0 || is_in_string(str[i + 1], DIGIT) == 0)
				return (true);
		}
	}

	// 4 : back = 'f' or number
	std::cout << "str[str.size()]=\'" << str[str.size()] << '\'' << std::endl;
	// if (is_in_string(str[str.size()], "f0123456789") == false)
	// 	return (true);
	
	// 5 : is char or string
	return (false);
}

bool	Convert::is_int(const std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (is_in_string(str[i], ".,"))
			return (false);
	}
	return (true);
}

bool	Convert::is_float(const std::string str)
{
	if (str[str.size()] == 'f')
		return (true);
	return (false);
}
