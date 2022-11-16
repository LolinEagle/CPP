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
	Bureaucrat	b(1);
	Intern		someRandomIntern;
	AForm		*rrf;

	std::cout << std::endl;
	try
	{
		rrf = someRandomIntern.makeForm("Buy Twitter", "Elon Musk");
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		if (rrf)
		{
			rrf->beSigned(b);
			rrf->execute(b);
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
