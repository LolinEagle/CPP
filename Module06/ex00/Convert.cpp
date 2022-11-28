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

Convert::Convert(void) : _c('\0'), _i(0), _f(0.0f), _d(0.0),
_float(false), _error(false)
{
}

Convert::Convert(const std::string str) : _c('\0'), _i(0), _f(0.0f), _d(0.0),
_float(false), _error(false)
{
	// Exepetion
	if (str.empty())
	{
		std::cout << RED << "Error: Your argument is empty." << RESET << std::endl;
		this->_error = true;
		return ;
	}
	if (str == "-inff" || str == "+inff" || str == "nanf")
	{
		double	d = strtod(str.data(), NULL);

		std::cout << "type: float." << std::endl;
		this->_f = static_cast<float>(d);
		this->_d = static_cast<double>(d);
		this->_float = true;
		return ;
	}
	if (str == "-inf" || str == "+inf" || str == "nan")
	{
		float	f = strtof(str.data(), NULL);

		std::cout << "type: double." << std::endl;
		this->_f = static_cast<float>(f);
		this->_d = static_cast<double>(f);
		this->_float = true;
		return ;
	}
	this->_float = false;

	// Type
	if (is_char(str))
	{
		if (str.size() > 1)
		{
			std::cout << RED << "Error: Input is a string." << RESET << std::endl;
			this->_error = true;
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
	this->_error = copy._error;
	return (*this);
}

void	Convert::display(void)
{
	if (this->_error)
		return ;
	if (this->_float == true)
		std::cout << BLUE << "char: impossible" << RESET << std::endl;
	else if (isprint(this->_c))
		std::cout << BLUE << "char: \'" << this->_c << "\'"<< RESET << std::endl;
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
	for (i = 0; str[i + 1]; i++)
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
	if (is_in_string(str[i], "f0123456789") == false)
		return (true);
	if (str[i] == 'f' && j != 1)
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
	std::cout << "type: char." << std::endl;
	this->_c = str[0];
	this->_i = static_cast<int>(this->_c);
	this->_f = static_cast<float>(this->_c);
	this->_d = static_cast<double>(this->_c);
}

void	Convert::convert_int(const std::string str)
{
	long double	ld = strtold(str.data(), NULL);

	std::cout << "type: int." << std::endl;
	if (ld < std::numeric_limits<char>::min() || ld > std::numeric_limits<char>::max())
		std::cout << YELLOW << "Warning: char overflow." << RESET << std::endl;
	this->_c = static_cast<char>(ld);
	if (ld < std::numeric_limits<int>::min() || ld > std::numeric_limits<int>::max())
		std::cout << YELLOW << "Warning: int overflow." << RESET << std::endl;
	this->_i = static_cast<int>(ld);
	if (ld < -FLT_MAX || ld > std::numeric_limits<float>::max())
		std::cout << YELLOW << "Warning: float overflow." << RESET << std::endl;
	this->_f = static_cast<float>(ld);
	if (ld < -DBL_MAX || ld > std::numeric_limits<double>::max())
		std::cout << YELLOW << "Warning: double overflow." << RESET << std::endl;
	this->_d = static_cast<double>(ld);
}

void	Convert::convert_float(const std::string str)
{
	long double	ld = strtold(str.data(), NULL);

	std::cout << "type: float." << std::endl;
	if (ld < std::numeric_limits<char>::min() || ld > std::numeric_limits<char>::max())
		std::cout << YELLOW << "Warning: char overflow." << RESET << std::endl;
	this->_c = static_cast<char>(ld);
	if (ld < std::numeric_limits<int>::min() || ld > std::numeric_limits<int>::max())
		std::cout << YELLOW << "Warning: int overflow." << RESET << std::endl;
	this->_i = static_cast<int>(ld);
	if (ld < -FLT_MAX || ld > std::numeric_limits<float>::max())
		std::cout << YELLOW << "Warning: float overflow." << RESET << std::endl;
	this->_f = static_cast<float>(ld);
	if (ld < -DBL_MAX || ld > std::numeric_limits<double>::max())
		std::cout << YELLOW << "Warning: double overflow." << RESET << std::endl;
	this->_d = static_cast<double>(ld);
}

void	Convert::convert_double(const std::string str)
{
	long double	ld = strtold(str.data(), NULL);

	std::cout << "type: double." << std::endl;
	if (ld < std::numeric_limits<char>::min() || ld > std::numeric_limits<char>::max())
		std::cout << YELLOW << "Warning: char overflow." << RESET << std::endl;
	this->_c = static_cast<char>(ld);
	if (ld < std::numeric_limits<int>::min() || ld > std::numeric_limits<int>::max())
		std::cout << YELLOW << "Warning: int overflow." << RESET << std::endl;
	this->_i = static_cast<int>(ld);
	if (ld < -FLT_MAX || ld > std::numeric_limits<float>::max())
		std::cout << YELLOW << "Warning: float overflow." << RESET << std::endl;
	this->_f = static_cast<float>(ld);
	if (ld < -DBL_MAX || ld > std::numeric_limits<double>::max())
		std::cout << YELLOW << "Warning: double overflow." << RESET << std::endl;
	this->_d = static_cast<double>(ld);
}
