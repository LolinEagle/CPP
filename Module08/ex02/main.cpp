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

#include <MutantStack.hpp>

int	main(void)
{
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << CYAN << "Top: " << mstack.top() << RESET << std::endl;
		mstack.pop();
		std::cout << CYAN << "Size: " << mstack.size() << RESET << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		// MutantStack<int>::iterator itb = mstack.begin();
		// MutantStack<int>::iterator ite = mstack.end();

		// ++itb;
		// --itb;
		// while (itb != ite)
		// {
		// 	std::cout << CYAN << '[' << *itb << ']' << RESET << std::endl;
		// 	++itb;
		// }

		// std::stack<int> s(mstack);
	}
	std::cout << GREEN << "- std::list -" << RESET << std::endl;
	{
		std::list<int> mstack;

		mstack.push_back(5);
		mstack.push_back(17);
		// std::cout << CYAN << "Top: " << mstack.top() << RESET << std::endl;
		// mstack.pop();
		std::cout << CYAN << "Size: " << mstack.size() << RESET << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);

		std::list<int>::iterator itb = mstack.begin();
		std::list<int>::iterator ite = mstack.end();

		++itb;
		--itb;
		while (itb != ite)
		{
			std::cout << CYAN << '[' << *itb << ']' << RESET << std::endl;
			++itb;
		}
		
		// std::stack<int> s(mstack);
	}
	return (0);
}
