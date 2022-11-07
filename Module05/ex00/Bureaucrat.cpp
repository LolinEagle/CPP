/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:09:27 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/07 12:09:29 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// void MyFunc(int c)
// {
// 	if (c > numeric_limits< char> ::max())
// 		throw invalid_argument("MyFunc argument too large.");
// 	//...
// }

// int main()
// {
// 	try
// 	{
// 		MyFunc(256); //cause an exception to throw
// 	}

// 	catch (invalid_argument& e)
// 	{
// 		cerr << e.what() << endl;
// 		return -1;
// 	}
// 	//...
// 	return 0;
// }

Bureaucrat::Bureaucrat(void) : _grade(0)
{
	std::cout << "Animal : Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(int grade) : _grade(_grade)
{
	std::cout << "Animal : Int constructor called" << std::endl;
	// ici
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	std::cout << "Animal : Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Animal : Default destructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	std::cout << "Animal : Assignment operator called" << std::endl;
}

std::string	Bureaucrat::getName(void)
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void)
{
	return (this->_grade);
}
