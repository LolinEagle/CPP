/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:13:16 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/16 14:13:18 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.hpp>

int	main(void)
{
	// Vector
	std::vector<int>	v;
	int					i;

	for (size_t i = 0; i < 8; i++)
	{
		v.push_back(i + 1);
		std::cout << (i % 2 ? MAGENTA : CYAN) << "v[" << i << "]=" << v[i]
		<< RESET << std::endl;
	}

	try
	{
		i = *easyfind(v, 3);
		std::cout << BLUE << "easyfind=" << i << RESET << std::endl;
		i = *easyfind(v, 8);
		std::cout << BLUE << "easyfind=" << i << RESET << std::endl;
		i = *easyfind(v, 42);
		std::cout << BLUE << "easyfind=" << i << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	// List
	std::list<float>	l;
	float				f;

	for (size_t i = 0; i < 10; i++)
	{
		l.push_back(i + 33);
		std::cout << (i % 2 ? MAGENTA : CYAN) << "l[" << i << "]=" << l.back()
		<< RESET << std::endl;
	}

	try
	{
		f = *easyfind(l, 33);
		std::cout << BLUE << "easyfind=" << f << RESET << std::endl;
		f = *easyfind(l, 42);
		std::cout << BLUE << "easyfind=" << f << RESET << std::endl;
		f = *easyfind(l, 420);
		std::cout << BLUE << "easyfind=" << f << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	// String
	std::string	s = "Bonjour";
	char		c;

	for (size_t i = 0; i < 7; i++)
	{
		std::cout << (i % 2 ? MAGENTA : CYAN) << "s[" << i << "]=" << s[i]
		<< RESET << std::endl;
	}

	try
	{
		c = *easyfind(s, 'B');
		std::cout << BLUE << "easyfind=" << c << RESET << std::endl;
		c = *easyfind(s, 'r');
		std::cout << BLUE << "easyfind=" << c << RESET << std::endl;
		c = *easyfind(s, '~');
		std::cout << BLUE << "easyfind=" << c << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	
	return (0);
}
