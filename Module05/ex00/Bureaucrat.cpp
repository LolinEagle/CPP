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

Bureaucrat::Bureaucrat(void) : _grade(150)
{
	std::cout << "Animal : Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name): _name(name), _grade(150)
{
	std::cout << "Animal : String constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(int grade) : _grade(grade)
{
	std::cout << "Animal : Int constructor called" << std::endl;
	try
	{
		if (grade < 1)
			throw ("Grade too high.");
	}
	catch (std::string str)
	{
		std::cout << str << std::endl;
	}
	// if (grade > 150)
	// 	throw (GradeTooLowException);
	// catch (GradeTooLowException)
	// 	std::cout << "Grade too low." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name)
{
	std::cout << "Animal : Copy constructor called" << std::endl;
	*this = copy;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Animal : Default destructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	std::cout << "Animal : Assignment operator called" << std::endl;
	this->_grade = copy._grade;
	return (*this);
}

std::string	Bureaucrat::getName(void)
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void)
{
	return (this->_grade);
}
