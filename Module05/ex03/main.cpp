/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:08:51 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/07 12:08:54 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main(void)
{
	Bureaucrat	b0("frrusso");// 150
	Bureaucrat	b1(1);

	std::cout << std::endl;
	try
	{
		Intern	someRandomIntern;
		AForm	*rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		if (rrf)
		{
			rrf->beSigned(b1);
			rrf->execute(b1);
			rrf->execute(b0);
			delete (rrf);
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	return (0);
}
