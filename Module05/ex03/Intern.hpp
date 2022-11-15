/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:33:22 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/08 13:33:24 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		// Constructor & Destructor
		Intern(void);
		Intern(const Intern &copy);
		~Intern();
		Intern	&operator=(const Intern &copy);

		// Function
		AForm	*makePresidentialPardonForm(std::string s2);
		AForm	*makeRobotomyRequestForm(std::string s2);
		AForm	*makeShrubberyCreationForm(std::string s2);
		AForm	*makeForm(std::string s1, std::string s2);
};

#endif
