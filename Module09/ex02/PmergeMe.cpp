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

void	PmergeMe::merge_insert_sort_d(std::deque<int>& a, int left, int right)
{
	if (left < right)
	{
		int	mid = left + (right - left) / 2;
		if (mid - left + 1 <= 32)
			std::sort(a.begin() + left, a.begin() + mid + 1);
		else
			merge_insert_sort_d(a, left, mid);
		if (right - mid <= 32)
			std::sort(a.begin() + mid + 1, a.begin() + right + 1);
		else
			merge_insert_sort_d(a, mid + 1, right);
		std::inplace_merge(
			a.begin() + left, a.begin() + mid + 1, a.begin() + right + 1);
	}
}

void	PmergeMe::merge_insert_sort_v(std::vector<int>& a, int left, int right)
{
	if (left < right)
	{
		int	mid = left + (right - left) / 2;
		if (mid - left + 1 <= 32)
			std::sort(a.begin() + left, a.begin() + mid + 1);
		else
			merge_insert_sort_v(a, left, mid);
		if (right - mid <= 32)
			std::sort(a.begin() + mid + 1, a.begin() + right + 1);
		else
			merge_insert_sort_v(a, mid + 1, right);
		std::inplace_merge(
			a.begin() + left, a.begin() + mid + 1, a.begin() + right + 1);
	}
}

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
			std::cout << RED << "Error: argument have a none positive number."
			<< RESET;
			_deque.clear();
			_vector.clear();
			return ;
		}
		int	j = 0;
		if (av[i][0] == '+')
			j++;
		for (; av[i][j]; j++)
		{
			if (isdigit(av[i][j]) == false)
			{
				std::cout << RED << "Error: bad input." << RESET;
				_deque.clear();
				_vector.clear();
				return ;
			}
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
	if (_deque.empty())
		return ;
	int	i;

	// Line 1
	std::cout << BLUE << "Before:";
	i = 0;
	for (std::deque<int>::iterator it = _deque.begin();
	it != _deque.end() && ++i < 6; it++)
		std::cout << ' ' << *it;
	if (i == 6)
		std::cout << " [...]" << std::endl;
	else
		std::cout << std::endl;

	// Sort
	clock_t start;
	start = clock();
	merge_insert_sort_d(_deque, 0, _deque.size() - 1);
	double deque_time = double(clock() - start) / double(CLOCKS_PER_SEC);
	start = clock();
	merge_insert_sort_v(_vector, 0, _vector.size() - 1);
	double vector_time = double(clock() - start) / double(CLOCKS_PER_SEC);

	// Line 2
	std::cout << "After :";
	i = 0;
	for (std::deque<int>::iterator it = _deque.begin();
	it != _deque.end() && ++i < 6; it++)
		std::cout << ' ' << *it;
	if (i == 6)
		std::cout << " [...]" << std::endl;
	else
		std::cout << std::endl;

	// Line 3 & 4
	std::cout << std::fixed;
	std::cout << "Time to process a range of " <<  _deque.size() <<
	" elements with std::deque  : " << deque_time  << " s" << std::endl;
	std::cout << "Time to process a range of " << _vector.size() <<
	" elements with std::vector : " << vector_time << " s" << RESET;
}
