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

#include "header.hpp"
#include <stdint.h>

typedef struct s_Data
{
	uintptr_t	_raw;
}				Data;


// Elle prend un pointeur et convertit celui-ci vers le type d’entier non-signé uintptr_t.
uintptr_t	serialize(Data* ptr)
{
	(void)ptr;
	return (0);
}

// Elle prend un entier non-signé en paramètre et le convertit en pointeur sur Data.
Data		*deserialize(uintptr_t raw)
{
	(void)raw;
	return (NULL);
}

int	main(void)
{
	Data		*ptr;
	uintptr_t	raw;

	(void)ptr;
	(void)raw;
	return (0);
}
