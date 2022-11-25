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

typedef struct s_data
{
	int	i;
}		Data;

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main(void)
{
	Data		*ptr1 = new Data;
	Data		*ptr2;
	uintptr_t	raw;

	try
	{
		ptr1->i = 1;
		std::cout << "ptr1->i=" << ptr1->i << std::endl;
		raw = serialize(ptr1);
		std::cout << "raw=" << raw << std::endl;
		ptr2 = deserialize(raw);
		std::cout << "ptr2->i=" << ptr2->i << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Exception: " << e.what();
	}
	delete (ptr1);
	return (0);
}
