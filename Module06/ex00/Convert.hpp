/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:02:04 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/21 12:02:06 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include "header.hpp"

#define DIGIT "0123456789"

class Convert
{
	private:
		// Data
		char	_c;
		int		_i;
		float	_f;
		double	_d;
		bool	_float;
		bool	_error;

		// Function
		bool	is_in_string(char c, const std::string str);
		bool	is_char(const std::string str);
		bool	is_int(const std::string str);
		bool	is_float(const std::string str);
		void	convert_char(const std::string str);
		void	convert_int(const std::string str);
		void	convert_float(const std::string str);
		void	convert_double(const std::string str);
	public:
		// Constructor & Destructor
		Convert(void);
		Convert(std::string str);
		Convert(const Convert &copy);
		~Convert();

		// Operator overload
		Convert	&operator=(const Convert &copy);
		
		// Function
		void	display(void);
};

#endif

