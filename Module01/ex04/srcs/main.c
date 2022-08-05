/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:13:27 by frrusso           #+#    #+#             */
/*   Updated: 2022/07/28 18:15:04 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char **argv)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		s1;
	std::string		s2;

	if (ac != 4)
		return (0);
	infile.open(argv[1]);
	str.append(argv[1]);
	str.append(".replace");
	outfile.open(str);
	infile.close();
	outfile.close();
	return (0);
}
