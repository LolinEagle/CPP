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
		
		// Function
};

template<typename T>
Array<T>::Array(void) : _tab(new T[0]), _size(0)
{
	std::cout << BLUE << "Array : Default Constructor called" << RESET << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) : _tab(new T[n]), _size(n)
{
	std::cout << BLUE << "Array : Unsigned int constructor called" << RESET << std::endl;
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

#endif

// • Construction par recopie et surcharge de l’opérateur d’affectation. Dans les deux
// cas, après une copie, toute modification de l’array original ou de sa copie ne doit
// pas impacter l’autre array.

// • Vous DEVEZ utiliser l’opérateur new[] pour allouer de la mémoire. Toute allocation préventive
// (c’est-à-dire allouer de la mémoire en avance) est interdite. Votre
// programme ne doit pas pouvoir accéder à une zone non allouée.

// • Les éléments doivent être accessibles grâce à l’opérateur d’indice : [ ].

// • En cas d’index invalide lors d’une tentative d’accès d’un élément en utilisant l’opérateur [ ],
// une std::exception est jetée.

// • Une fonction membre size() qui retourne le nombre d’éléments dans l’array. Cette
// fonction membre ne prend aucun paramètre et ne doit pas modifier l’instance courante.

// Comme d’habitude, assurez-vous que tout fonctionne comme attendu et rendez un
// fichier main.cpp contenant vos tests.
