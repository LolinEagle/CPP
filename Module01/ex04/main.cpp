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

#include <fstream>
#include <iostream>
#include <string>

int	ft_parsing(int ac, char **av, std::ifstream *infile, std::ofstream *outfile)
{
	std::string	out;

	if (ac != 4)
	{
		std::cout << "Usage : ./sed_is_for_losers file string1 string2\n";
		return (1);
	}
	std::cout << "filename is : " << av[1] << '\n';
	std::cout << "string 1 is : " << av[2] << '\n';
	std::cout << "string 2 is : " << av[3] << '\n';
	if (!infile->is_open())
	{
		std::cout << av[1] << " not a valid file\n";
		return (1);
	}
	out = av[1];
	out += ".replace";
	std::cout << "out file is : " << out << '\n';
	outfile->open(out.data(), std::ofstream::trunc);
	return (0);
}

void	ft_sed_is_for_losers(std::ifstream *infile, std::ofstream *outfile,
std::string *s1, std::string *s2)
{
	std::string		str;
	char			c;

	c = infile->get();
	while (!infile->eof())
	{
		str.push_back(c);
		if (str.find(*s1) != std::string::npos)
		{
			str.erase(str.end() - (*s1).size(), str.end());
			*outfile << str;
			*outfile << *s2;
			str.clear();
		}
		c = infile->get();
	}
	*outfile << str;
	infile->close();
	outfile->close();
}

int	main(int ac, char **av)
{
	std::ifstream	infile(av[1]);
	std::ofstream	outfile;
	std::string		s1;
	std::string		s2;

	if (ft_parsing(ac, av, &infile, &outfile))
		return (0);
	s1 = av[2];
	s2 = av[3];
	ft_sed_is_for_losers(&infile, &outfile, &s1, &s2);
	return (0);
}
