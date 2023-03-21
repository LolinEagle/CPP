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

void	PmergeMe::merge_insert_sort_d(std::deque<int>& d)
{
	if (d.size() == 1)
		return ;

	std::deque<int>::iterator middle = d.begin() + (d.size() / 2);
	std::deque<int> left(d.begin(), middle);
	std::deque<int> right(middle, d.end());

	merge_insert_sort_d(left);
	merge_insert_sort_d(right);

	std::deque<int>::iterator left_iter = left.begin();
	std::deque<int>::iterator right_iter = right.begin();
	std::deque<int>::iterator iter = d.begin();

	while (left_iter != left.end() && right_iter != right.end())
	{
		if (*left_iter <= *right_iter)
		{
			*iter = *left_iter;
			left_iter++;
		}
		else
		{
			*iter = *right_iter;
			right_iter++;
		}
		iter++;
	}
	while (left_iter != left.end())
	{
		*iter = *left_iter;
		left_iter++;
		iter++;
	}
	while (right_iter != right.end())
	{
		*iter = *right_iter;
		right_iter++;
		iter++;
	}
}

void	PmergeMe::merge_insert_sort_v(std::vector<int>& v)
{
	if (v.size() == 1)
		return ;

	std::vector<int>::iterator middle = v.begin() + (v.size() / 2);
	std::vector<int> left(v.begin(), middle);
	std::vector<int> right(middle, v.end());

	merge_insert_sort_v(left);
	merge_insert_sort_v(right);

	std::vector<int>::iterator left_iter = left.begin();
	std::vector<int>::iterator right_iter = right.begin();
	std::vector<int>::iterator iter = v.begin();

	while (left_iter != left.end() && right_iter != right.end())
	{
		if (*left_iter <= *right_iter)
		{
			*iter = *left_iter;
			left_iter++;
		}
		else
		{
			*iter = *right_iter;
			right_iter++;
		}
		iter++;
	}
	while (left_iter != left.end())
	{
		*iter = *left_iter;
		left_iter++;
		iter++;
	}
	while (right_iter != right.end())
	{
		*iter = *right_iter;
		right_iter++;
		iter++;
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
			std::cout << RED << "Error: not a positive number." << RESET;
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

	// Var
	int		i;
	double	deque_time;
	double	vector_time;
	clock_t	start;

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
	start = clock();
	merge_insert_sort_d(_deque);
	deque_time = double(clock() - start) / double(CLOCKS_PER_SEC);
	start = clock();
	merge_insert_sort_v(_vector);
	vector_time = double(clock() - start) / double(CLOCKS_PER_SEC);

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
