/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:11:42 by frrusso           #+#    #+#             */
/*   Updated: 2022/12/02 15:11:44 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <header.hpp>

// Exception
class IndexNotFind : public std::exception
{
	const char	*what() const throw ()
	{
		return ("Error : Index not find.");
	}
};

template<typename T>
typename T::iterator	easyfind(T container, int toFind)
{
	typename T::iterator	it = find(container.begin(), container.end(), toFind);
	if (it == container.end())
		throw (IndexNotFind());
	return (it);
}

#endif
