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

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	srand(time(NULL));
	switch (std::rand() % 3)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
	}
	return (NULL);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "ptr = A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "ptr = B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "ptr = C" << std::endl;
	else
		std::cout << "ptr = Base" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		Base &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "ref = A" << std::endl;
	}
	catch (const std::exception& e)
	{
		try
		{
			Base &b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "ref = B" << std::endl;
		}
		catch (const std::exception& e)
		{
			try
			{
				Base &c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "ref = C" << std::endl;
			}
			catch (const std::exception& e)
			{
				std::cout << "ref = Base" << std::endl;
			}
		}
	}
}

int	main(void)
{
	Base	*ptr = generate();
	Base	&ref = *ptr;

	identify(ptr);
	identify(ref);
	delete (ptr);
	return (0);
}
