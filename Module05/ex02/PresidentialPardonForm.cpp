/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:32:49 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/08 13:32:50 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

#define SIGN 145
#define EXEC 137

PresidentialPardonForm::PresidentialPardonForm(void) :
AForm("Form", 0, SIGN, EXEC), _target("nobody")
{
	std::cout << "PresidentialPardonForm : Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
AForm("Form", 0, SIGN, EXEC), _target(target)
{
	std::cout << "PresidentialPardonForm : String constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) :
AForm(copy.getName(), copy.getSigned(), copy.getGradeSign(), copy.getGradeExecuting()),
_target(copy._target)
{
	std::cout << "PresidentialPardonForm : Copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm : Default destructor called" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	std::cout << "PresidentialPardonForm : Assignment operator called" << std::endl;
	this->_target = copy._target;
	return (*this);
}

void	execute(Bureaucrat const & executor) const
{
	
}
