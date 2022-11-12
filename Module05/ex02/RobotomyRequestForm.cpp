/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:32:24 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/08 13:32:26 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

#define SIGN 72
#define EXEC 45

RobotomyRequestForm::RobotomyRequestForm(void) :
AForm("RobotomyRequestForm", 0, SIGN, EXEC), _target("nobody")
{
	std::cout << "RobotomyRequestForm : Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
AForm("RobotomyRequestForm", 0, SIGN, EXEC), _target(target)
{
	std::cout << "RobotomyRequestForm : String constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) :
AForm(copy.getName(), copy.getSigned(), copy.getGradeSign(), copy.getGradeExecuting()),
_target(copy._target)
{
	std::cout << "RobotomyRequestForm : Copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm : Default destructor called" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	std::cout << "RobotomyRequestForm : Assignment operator called" << std::endl;
    this->_target = copy._target;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	AForm::execute(executor);
	srand(time(NULL));
	std::cout << "* Drill noises. *" << std::endl;
	if (std::rand() % 2)
		std::cout << _target << " is robotomized." << std::endl;
	else
		std::cout << "Robotomy fail." << std::endl;
}
