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

Form::Form(void) :
_name("Form"), _signed(0), _gradeSign(150), _gradeExecuting(150)
{
	std::cout << "Form : Default constructor called" << std::endl;
}

Form::Form(std::string name, bool signed_, int gradeSign, int gradeExecuting) :
_name(name), _signed(signed_), _gradeSign(gradeSign),
_gradeExecuting(gradeExecuting)
{
	std::cout << "Form : Full constructor called" << std::endl;
	if (this->_gradeSign < 1 || this->_gradeExecuting < 1)
		throw (GradeTooHighException());
	if (this->_gradeSign > 150 || this->_gradeExecuting > 150)
		throw (GradeTooLowException());
}

Form::Form(const Form &copy) : 
_name(copy._name), _signed(copy._signed), _gradeSign(copy._gradeSign),
_gradeExecuting(copy._gradeExecuting)
{
	std::cout << "Form : Copy constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form : Default destructor called" << std::endl;
}

Form	&Form::operator=(const Form &copy)
{
	std::cout << "Form : Assignment operator called" << std::endl;
	this->_signed = copy._signed;
	return (*this);
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Error : Grade too high !");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Error : Grade too low !");
}

const std::string	Form::getName(void) const
{
	return (this->_name);
}

bool				Form::getSigned(void) const
{
	return (this->_signed);
}

int					Form::getGradeSign(void) const
{
	return (this->_gradeSign);
}

int					Form::getGradeExecuting(void) const
{
	return (this->_gradeExecuting);
}

void				Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= _gradeSign)
		this->_signed = 1;
	else
		throw (GradeTooLowException());
}

std::ostream	&operator<<(std::ostream &stream, const Form &object)
{
	stream << "Name=" << object.getName() << " Signed=" << object.getSigned() <<
	" GradeSign=" << object.getGradeSign() << " GradeExecuting=" <<
	object.getGradeExecuting();
	return (stream);
}
