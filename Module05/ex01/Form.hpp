/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:31:00 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/08 13:31:06 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeSign;
		const int			_gradeExecuting;
	public:
		// Constructor & Destructor
		Form(void);
		Form(std::string name, bool signed_, int gradeSign, int gradeExecuting);
		Form(const Form &copy);
		~Form();
		Form	&operator=(const Form &copy);

		// Exception
		class GradeTooHighException : public std::exception
		{
			const char	*what() const throw ();
		};
		class GradeTooLowException : public std::exception
		{
			const char	*what() const throw ();
		};

		// Function
		const std::string	getName(void) const;
		bool				getSigned(void) const;
		int					getGradeSign(void) const;
		int					getGradeExecuting(void) const;
		void				beSigned(const Bureaucrat &b);
};

std::ostream	&operator<<(std::ostream &stream, const Form &object);

#endif

