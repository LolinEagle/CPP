/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:09:57 by frrusso           #+#    #+#             */
/*   Updated: 2023/03/16 12:09:59 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PmergeMe.hpp>

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << RED << "Error : no argument." << RESET;
		return (0);
	}
	PmergeMe	pmerge_me(av);
	pmerge_me.sort();
	return (0);
}
