/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:09:21 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/07 12:09:22 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		// Constructor & Destructor
		Bureaucrat(void);
		Bureaucrat(std::string name);
		Bureaucrat(int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();
		Bureaucrat	&operator=(const Bureaucrat &copy);

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
		std::string	getName(void) const;
		int			getGrade(void) const;
		void		increment(void);
		void		decrement(void);
		void		signForm(const Form &f) const;
};

std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &object);

#endif
