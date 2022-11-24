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

Convert::Convert(const std::string str) : _c(0), _i(0), _f(0.0f), _d(0.0), _float(false)
{
	// Exepetion
	if (str.empty())
		return ;
	if (str == "-inff" || str == "+inff" || str == "nanf")
	{
		this->_float = true;
		convert_float(str);
		return ;
	}
	if (str == "-inf" || str == "+inf" || str == "nan")
	{
		this->_float = true;
		convert_double(str);
		return ;
	}
	this->_float = false;

	// Type
	if (is_char(str))
	{
		if (str.size() > 1)
		{
			std::cout << "Input is a string." << std::endl;
			return ;
		}
		convert_char(str);
	}
	else if (is_int(str))
		convert_int(str);
	else if (is_float(str))
		convert_float(str);
	else
		convert_double(str);
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
			if (is_in_string(str[i - 1], DIGIT) == false ||
				is_in_string(str[i + 1], DIGIT) == false || j > 1)
				return (true);
		}
	}

	// 4 : back = 'f' or number
	if (is_in_string(str[str.size() - 1], "f0123456789") == false)
		return (true);
	
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
	if (str[str.size() - 1] == 'f')
		return (true);
	return (false);
}

void	Convert::convert_char(const std::string str)
{
	this->_c = str[0];
	this->_i = static_cast<int>(this->_c);
	this->_f = static_cast<float>(this->_c);
	this->_d = static_cast<double>(this->_c);
}

void	Convert::convert_int(const std::string str)
{
	this->_i = atoi(str.data());
	this->_c = static_cast<char>(this->_i);
	this->_f = static_cast<float>(this->_i);
	this->_d = static_cast<double>(this->_i);
}

void	Convert::convert_float(const std::string str)
{
	this->_f = strtof(str.data(), NULL);
	this->_c = static_cast<char>(this->_f);
	this->_i = static_cast<int>(this->_f);
	this->_d = static_cast<double>(this->_f);
}

void	Convert::convert_double(const std::string str)
{
	this->_d = strtod(str.data(), NULL);
	this->_c = static_cast<char>(this->_d);
	this->_i = static_cast<int>(this->_d);
	this->_f = static_cast<float>(this->_d);
}
