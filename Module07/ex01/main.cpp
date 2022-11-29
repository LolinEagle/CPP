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
void	ft_print(T &var)
{
	std::cout << static_cast<char>(var);
	std::cout.flush();
}

template<typename T>
void	ft_tolower(T c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
}

template<typename T>
void	ft_toupper(T c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
}

int	main(void)
{
	int		a[] = {66, 79, 78, 106, 111, 117, 114, 0};
	std::cout << RED;
	iter(a, 8, ft_print);
	std::cout << std::endl;
	iter(a, 8, ft_tolower);
	iter(a, 8, ft_print);
	std::cout << RESET << std::endl;

	char	b[] = "chaine1";
	std::cout << GREEN;
	iter(b, 8, ft_print);
	std::cout << std::endl;
	iter(b, 8, ft_toupper);
	iter(b, 8, ft_print);
	std::cout << RESET << std::endl;

	float	c[] = {66.0f, 111.0f, 110.0f, 115.0f, 111.0f, 105.0f, 114.0f, 0.0f};
	std::cout << BLUE;
	iter(c, 8, ft_print);
	std::cout << std::endl;
	iter(c, 8, ft_toupper);
	iter(c, 8, ft_print);
	std::cout << RESET << std::endl;


	return (0);
}
