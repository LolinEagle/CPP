/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:12:38 by frrusso           #+#    #+#             */
/*   Updated: 2023/03/16 12:12:39 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PmergeMe.hpp>

PmergeMe::PmergeMe(void)
{
}

PmergeMe::PmergeMe(char **av)
{
	int	a;
	for (int i = 1; av[i]; i++)
	{
		if (av[i][0] == '-')
		{
			std::cout << "Error: not a positive number." << std::endl;
			_deque.clear();
			_vector.clear();
			return ;
		}
		a = atoi(av[i]);
		_deque.push_back(a);
		_vector.push_back(a);
	}
}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	*this = copy;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &copy)
{
	_deque = copy._deque;
	_vector = copy._vector;
	return (*this);
}

PmergeMe::~PmergeMe()
{
}

void	PmergeMe::sort(void)
{
	// Line 1
	std::cout << BLUE << "Before:";
	for (std::deque<int>::iterator it = _deque.begin();
	it != _deque.end(); it++)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	// Sort
	clock_t start;
	start = clock();
	std::sort(_deque.begin(), _deque.end());
	double deque_time = double(clock() - start) / double(CLOCKS_PER_SEC);
	start = clock();
	std::sort(_vector.begin(), _vector.end());
	double vector_time = double(clock() - start) / double(CLOCKS_PER_SEC);

	// Line 2
	std::cout << "After :";
	for (std::deque<int>::iterator it = _deque.begin();
	it != _deque.end(); it++)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	// Line 3 & 4
	std::cout << std::fixed;
	std::cout << "Time to process a range of " <<  _deque.size() <<
	" elements with std::deque  : " << deque_time  << " us" << std::endl;
	std::cout << "Time to process a range of " << _vector.size() <<
	" elements with std::vector : " << vector_time << " us" << RESET;
}
