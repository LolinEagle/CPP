/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:12:55 by frrusso           #+#    #+#             */
/*   Updated: 2023/03/16 12:12:56 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PmergeMe_HPP
#define PmergeMe_HPP

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <deque>
#include <vector>

#define RESET	"\033[0m" << std::endl;
#define RED		"\033[31m"
#define BLUE	"\033[34m"

class PmergeMe
{
	private:
		std::deque<int>		_deque;
		std::vector<int>	_vector;

		void	merge_insert_sort_d(std::deque<int>& a, int left, int right);
		void	merge_insert_sort_v(std::vector<int>& a, int left, int right);
	public:
		PmergeMe(void);
		PmergeMe(char **av);
		PmergeMe(const PmergeMe &copy);
		PmergeMe	&operator=(const PmergeMe &copy);
		~PmergeMe();

		void	sort(void);
};

#endif
