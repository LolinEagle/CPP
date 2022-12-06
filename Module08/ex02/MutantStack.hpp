/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:33:34 by frrusso           #+#    #+#             */
/*   Updated: 2022/12/03 18:33:37 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <header.hpp>

template<typename T> class MutantStack : public std::stack<T>
{
	public:
		// Constructor & Destructor
		MutantStack(void);
		MutantStack(const MutantStack &copy);
		~MutantStack();

		// Operator overload
		MutantStack	&operator=(const MutantStack &copy);
		
		// Function
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin(void)
		{
			return (this->c.begin());
		}
		iterator	end(void)
		{
			return (this->c.end());
		}
};

template<typename T> MutantStack<T>::MutantStack(void)
{
	std::cout << BLUE << "MutantStack : Default Constructor called" << RESET << std::endl;
}

template<typename T> MutantStack<T>::MutantStack(const MutantStack<T> &copy)
{
	std::cout << BLUE << "MutantStack : Copy Constructor called" << RESET << std::endl;
	*this = copy;
}

template<typename T> MutantStack<T>::~MutantStack()
{
	std::cout << RED << "MutantStack : Destructor called" << RESET << std::endl;
}

template<typename T> MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &copy)
{
	(void)copy;
	return (*this);
}

#endif
