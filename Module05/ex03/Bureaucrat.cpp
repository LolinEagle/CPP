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

Bureaucrat::Bureaucrat(void) : _name("Employee"), _grade(150)
{
	std::cout << "Bureaucrat : Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name), _grade(150)
{
	std::cout << "Bureaucrat : String constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(int grade) : _name("Employee"), _grade(grade)
{
	std::cout << "Bureaucrat : Int constructor called" << std::endl;
	if (grade < 1)
		throw (GradeTooHighException());
	if (grade > 150)
		throw (GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name)
{
	std::cout << "Bureaucrat : Copy constructor called" << std::endl;
	*this = copy;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat : Default destructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	std::cout << "Bureaucrat : Assignment operator called" << std::endl;
	this->_grade = copy._grade;
	return (*this);
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error : Grade too high !");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error : Grade too low !");
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::increment(void)
{
	if (--this->_grade < 1)
		throw (GradeTooHighException());
}

void	Bureaucrat::decrement(void)
{
	if (++this->_grade > 150)
		throw (GradeTooLowException());
}

void	Bureaucrat::signForm(AForm &f) const
{
	f.beSigned(*this);
	if (f.getSigned() == 1)
		std::cout << this->_name << " signed " << f.getName() << std::endl;
	else
		std::cout << this->_name << " couldn\'t sign " << f.getName() <<
		" because is grade is too low." << std::endl;
}

void	Bureaucrat::executeForm(AForm const & form)
{
	form.execute(*this);
	if (form.getSigned() == 0)
		std::cout << form.getName() << " is not signed." << std::endl;
	if (getGrade() > form.getGradeExecuting())
		std::cout << this->_name << " couldn\'t execute " << form.getName() <<
		" because is grade is too low." << std::endl;
}

std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &object)
{
	stream << object.getName() << ", bureaucrat grade " << object.getGrade();
	return (stream);
}
