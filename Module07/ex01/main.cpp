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

#include "iter.hpp"

template<typename T>
void	ft_print(T const &var)
{
	std::cout << static_cast<char>(var);
	std::cout.flush();
}

template<typename T>
void	ft_tolower(T const &c)
{
	if (c >= 'A' && c <= 'Z')
		std::cout << static_cast<char>(c + 32);
	else
		std::cout << static_cast<char>(c);
	std::cout.flush();
}

template<typename T>
void	ft_toupper(T const &c)
{
	if (c >= 'a' && c <= 'z')
		std::cout << static_cast<char>(c - 32);
	else
		std::cout << static_cast<char>(c);
	std::cout.flush();
}

int	main(void)
{
	int		a[] = {66, 111, 110, 106, 111, 117, 114, 0};
	std::cout << RED;
	iter(a, 8, ft_print);
	std::cout << RESET << std::endl;

	char	b[] = "chaine1";
	std::cout << GREEN;
	iter(b, 8, ft_tolower);
	std::cout << RESET << std::endl;

	float	c[] = {66.0f, 111.0f, 110.0f, 115.0f, 111.0f, 105.0f, 114.0f, 0.0f};
	std::cout << BLUE;
	iter(c, 8, ft_toupper);
	std::cout << RESET << std::endl;

	return (0);
}
