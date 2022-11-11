/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:31:10 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/08 13:31:12 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

AForm::AForm(void) :
_name("Form"), _signed(0), _gradeSign(150), _gradeExecuting(150)
{
	std::cout << "AForm : Default constructor called" << std::endl;
}

AForm::AForm(std::string name, bool signed_, int gradeSign, int gradeExecuting) :
_name(name), _signed(signed_), _gradeSign(gradeSign),
_gradeExecuting(gradeExecuting)
{
	std::cout << "AForm : Full constructor called" << std::endl;
	if (this->_gradeSign < 1 || this->_gradeExecuting < 1)
		throw (GradeTooHighException());
	if (this->_gradeSign > 150 || this->_gradeExecuting > 150)
		throw (GradeTooLowException());
}

AForm::AForm(const AForm &copy) : 
_name(copy._name), _signed(copy._signed), _gradeSign(copy._gradeSign),
_gradeExecuting(copy._gradeExecuting)
{
	std::cout << "AForm : Copy constructor called" << std::endl;
}

AForm::~AForm()
{
	std::cout << "AForm : Default destructor called" << std::endl;
}

AForm	&AForm::operator=(const AForm &copy)
{
	std::cout << "AForm : Assignment operator called" << std::endl;
	this->_signed = copy._signed;
	return (*this);
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Error : Grade too high !");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Error : Grade too low !");
}

const std::string	AForm::getName(void) const
{
	return (this->_name);
}

bool				AForm::getSigned(void) const
{
	return (this->_signed);
}

int					AForm::getGradeSign(void) const
{
	return (this->_gradeSign);
}

int					AForm::getGradeExecuting(void) const
{
	return (this->_gradeExecuting);
}

void				AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= _gradeSign && b.getGrade() <= _gradeExecuting)
		this->_signed = 1;
	else
		throw (GradeTooLowException());
	b.signForm(*this);
}

std::ostream	&operator<<(std::ostream &stream, const AForm &object)
{
	stream << "Name=" << object.getName() << " Signed=" << object.getSigned() <<
	" GradeSign=" << object.getGradeSign() << " GradeExecuting=" <<
	object.getGradeExecuting();
	return (stream);
}
