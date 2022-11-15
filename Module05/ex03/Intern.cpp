/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:33:27 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/08 13:33:30 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern : Default constructor called" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	std::cout << "Intern : Copy constructor called" << std::endl;
	*this = copy;
}

Intern::~Intern()
{
	std::cout << "Intern : Default destructor called" << std::endl;
}

Intern	&Intern::operator=(const Intern &copy)
{
	std::cout << "Intern : Assignment operator called" << std::endl;
	(void)copy;
	return (*this);
}

AForm	*Intern::makePresidentialPardonForm(std::string s2)
{
	return (new PresidentialPardonForm(s2));
}

AForm	*Intern::makeRobotomyRequestForm(std::string s2)
{
	return (new RobotomyRequestForm(s2));
}

AForm	*Intern::makeShrubberyCreationForm(std::string s2)
{
	return (new ShrubberyCreationForm(s2));
}

AForm	*Intern::makeForm(std::string s1, std::string s2)
{
	int			i;
	std::string	formType[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	void*		(Intern::*fptr[3])(std::string) = {&Intern::makePresidentialPardonForm, &Intern::makeRobotomyRequestForm, &Intern::makeShrubberyCreationForm};
	// AForm*		tmp;

	for (i = 0; i < 3; i++)
	{
		if (s1 == formType[i])
		{
			std::cout << "Intern creates " << s1 << std::endl;
			return (fptr(s2)[i]);

		}
	}
	std::cout << "Intern cannot creates " << s1 << std::endl;
	return (NULL);
}
