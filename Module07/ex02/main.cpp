/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:25:39 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/29 14:25:43 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750

int main(void)
{
	// Array<int>	numbers(MAX_VAL);

	// int* mirror = new int[MAX_VAL];
	// srand(time(NULL));
	// for (int i = 0; i < MAX_VAL; i++)
	// {
	// 	const int value = rand();
	// 	numbers[i] = value;
	// 	mirror[i] = value;
	// }
	// //SCOPE
	// {
	// 	Array<int>	tmp = numbers;
	// 	Array<int>	test(tmp);
	// }

	// for (int i = 0; i < MAX_VAL; i++)
	// {
	// 	if (mirror[i] != numbers[i])
	// 	{
	// 		std::cerr << "didn't save the same value!!" << std::endl;
	// 		return 1;
	// 	}
	// }
	// try
	// {
	// 	numbers[-2] = 0;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// try
	// {
	// 	numbers[MAX_VAL] = 0;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	// for (int i = 0; i < MAX_VAL; i++)
	// {
	// 	numbers[i] = rand();
	// }
	// delete [] mirror;

	// Heap Test
	Array<int> *A = new Array<int>();
	std::cout << A << std::endl;

	Array<int> *B = new Array<int>(8);
	std::cout << B << std::endl;

	Array<int> *C = new Array<int>(*A);
	std::cout << C << std::endl;
	C = new Array<int>(*C);
	std::cout << C << std::endl;
	
	Array<int> *D = A;
	std::cout << "D=" << D << std::endl;
	D = A;
	std::cout << "A="  << A << std::endl;
	std::cout << "D="  << D << std::endl;

	delete (A);
	delete (B);
	delete (C);

	return (0);
}
