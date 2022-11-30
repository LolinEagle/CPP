/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:26:54 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/29 14:26:56 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "header.hpp"

template<typename T>
class Array
{
	private:
		// Data
		T				*_tab;
		unsigned int	_size;
	public:
		// Constructor & Destructor
		Array(void);
		Array(unsigned int n);
		Array(const Array &copy);
		~Array();

		// Operator overload
		Array<T>	&operator=(const Array<T> &copy);
		T			&operator[](unsigned int i);

		// Exception
		class BadIndex : public std::exception
		{
			const char	*what() const throw ()
			{
				return ("Error : Bad Index !");
			}
		};

		// Function
		void			tab(void);
		unsigned int	size(void);
		unsigned int	getsize(void);
};

template<typename T>
Array<T>::Array(void) : _tab(NULL), _size(0)
{
	std::cout << BLUE << "Array : Default Constructor called" << RESET << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) : _tab(new T[n]), _size(n)
{
	std::cout << BLUE << "Array : Unsigned int constructor called" << RESET << std::endl;
	for (unsigned int i = 0; i < n; i++)
		_tab[i] = 0;
}

template<typename T>
Array<T>::Array(const Array &copy)
{
	std::cout << BLUE << "Array : Copy Constructor called" << RESET << std::endl;
	*this = copy;
}

template<typename T>
Array<T>::~Array()
{
	std::cout << RED << "Array : Destructor called" << RESET << std::endl;
	delete [] (_tab);
}

template<typename T>
Array<T>	&Array<T>::operator=(const Array<T> &copy)
{
	std::cout << CYAN << "Array : Operator overload called" << RESET << std::endl;
	_tab = new T[copy._size];
	for (unsigned int i = 0; i < copy._size; i++)
	{
		_tab[i] = copy._tab[i];
	}
	_size = copy._size;
	return (*this);
}

template<typename T>
T			&Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw (BadIndex());
	return (_tab[i]);
}

template<typename T>
void			Array<T>::tab(void)
{
	for (unsigned int i = 0; _tab[i] && i < _size; i++)
	{
		if (i % 2 == 0)
			std::cout << MAGENTA << "[" << i << "]=" << _tab[i] << RESET << std::endl;
		else
			std::cout << YELLOW << "[" << i << "]=" << _tab[i] << RESET << std::endl;
	}
}

template<typename T>
unsigned int	Array<T>::size(void)
{
	unsigned int i;
	for (i = 0; _tab[i] && i < _size; i++)
		i++;
	return (i);
}

template<typename T>
unsigned int	Array<T>::getsize(void)
{
	return (_size);
}

#endif
