/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:31:58 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/08 13:32:00 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#define SIGN 25
#define EXEC 5

ShrubberyCreationForm::ShrubberyCreationForm(void) :
AForm("Form", 0, SIGN, EXEC), _target("nobody")
{
	std::cout << "ShrubberyCreationForm : Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
AForm("Form", 0, SIGN, EXEC), _target(target)
{
	std::cout << "ShrubberyCreationForm : String constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) :
AForm(copy.getName(), copy.getSigned(), copy.getGradeSign(), copy.getGradeExecuting()),
_target(copy._target)
{
	std::cout << "ShrubberyCreationForm : Copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm : Default destructor called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	std::cout << "ShrubberyCreationForm : Assignment operator called" << std::endl;
	this->_target = copy._target;
	return (*this);
}

void	execute(Bureaucrat const & executor) const
{
	
}
